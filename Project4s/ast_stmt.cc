/* File: ast_stmt.cc
 * -----------------
 * Implementation of statement node classes.
 */
#include "ast_stmt.h"
#include "ast_type.h"
#include "ast_decl.h"
#include "ast_expr.h"
// #include <raw_ostream.h>
#include "irgen.h"
#include "llvm/Bitcode/ReaderWriter.h"
#include "llvm/Support/raw_ostream.h"

Program::Program(List<Decl*> *d) {
    Assert(d != NULL);
    (decls=d)->SetParentAll(this);
}

void Program::PrintChildren(int indentLevel) {
    decls->PrintAll(indentLevel+1);
    printf("\n");
}

IRGenerator Program::irgen; // define irgen

void Program::Emit() {
    llvm::Module *mod = Program::irgen.GetOrCreateModule("main");
   //  FILE * fp;

   // fp = fopen (stderr, "w+");
   
    for (int i = 0; i < decls->NumElements(); i++) {
        fprintf(stderr, "decl %d\n", i);
        decls->Nth(i)->Emit();
    }


    
    // // create a function signature
    // std::vector<llvm::Type *> argTypes;
    // llvm::Type *intTy = irgen.GetIntType();
    // argTypes.push_back(intTy);
    // llvm::ArrayRef<llvm::Type *> argArray(argTypes);
    // llvm::FunctionType *funcTy = llvm::FunctionType::get(intTy, argArray, false);

    // // llvm::Function *f = llvm::cast<llvm::Function>(mod->getOrInsertFunction("foo", intTy, intTy, (Type *)0));
    // llvm::Function *f = llvm::cast<llvm::Function>(mod->getOrInsertFunction("foo", funcTy));
    // llvm::Argument *arg = f->arg_begin();
    // arg->setName("x");

    // // insert a block into the runction
    // llvm::LLVMContext *context = irgen.GetContext();
    // llvm::BasicBlock *bb = llvm::BasicBlock::Create(*context, "entry", f);

    // // create a return instruction
    // llvm::Value *val = llvm::ConstantInt::get(intTy, 1);
    // llvm::Value *sum = llvm::BinaryOperator::CreateAdd(arg, val, "", bb);
    // llvm::ReturnInst::Create(*context, sum, bb);
        // write the BC into standard output
    fprintf(stderr, "%s\n", "writing Bitcode");
    mod->dump();
    llvm::WriteBitcodeToFile(mod, llvm::outs());
    fprintf(stderr, "%s\n", "done writing Bitcode");

}

StmtBlock::StmtBlock(List<VarDecl*> *d, List<Stmt*> *s) {
    Assert(d != NULL && s != NULL);
    (decls=d)->SetParentAll(this);
    (stmts=s)->SetParentAll(this);
}

void StmtBlock::PrintChildren(int indentLevel) {
    decls->PrintAll(indentLevel+1);
    stmts->PrintAll(indentLevel+1);
}

DeclStmt::DeclStmt(Decl *d) {
    Assert(d != NULL);
    (decl=d)->SetParent(this);
}

void DeclStmt::PrintChildren(int indentLevel) {
    decl->Print(indentLevel+1);
}

ConditionalStmt::ConditionalStmt(Expr *t, Stmt *b) { 
    Assert(t != NULL && b != NULL);
    (test=t)->SetParent(this); 
    (body=b)->SetParent(this);
}

ForStmt::ForStmt(Expr *i, Expr *t, Expr *s, Stmt *b): LoopStmt(t, b) { 
    Assert(i != NULL && t != NULL && b != NULL);
    (init=i)->SetParent(this);
    step = s;
    if ( s )
      (step=s)->SetParent(this);
}

void ForStmt::PrintChildren(int indentLevel) {
    init->Print(indentLevel+1, "(init) ");
    test->Print(indentLevel+1, "(test) ");
    if ( step )
      step->Print(indentLevel+1, "(step) ");
    body->Print(indentLevel+1, "(body) ");
}

void WhileStmt::PrintChildren(int indentLevel) {
    test->Print(indentLevel+1, "(test) ");
    body->Print(indentLevel+1, "(body) ");
}

IfStmt::IfStmt(Expr *t, Stmt *tb, Stmt *eb): ConditionalStmt(t, tb) { 
    Assert(t != NULL && tb != NULL); // else can be NULL
    elseBody = eb;
    if (elseBody) elseBody->SetParent(this);
}

void IfStmt::PrintChildren(int indentLevel) {
    if (test) test->Print(indentLevel+1, "(test) ");
    if (body) body->Print(indentLevel+1, "(then) ");
    if (elseBody) elseBody->Print(indentLevel+1, "(else) ");
}


ReturnStmt::ReturnStmt(yyltype loc, Expr *e) : Stmt(loc) { 
    expr = e;
    if (e != NULL) expr->SetParent(this);
}

void ReturnStmt::PrintChildren(int indentLevel) {
    if ( expr ) 
      expr->Print(indentLevel+1);
}
  
SwitchLabel::SwitchLabel(Expr *l, Stmt *s) {
    Assert(l != NULL && s != NULL);
    (label=l)->SetParent(this);
    (stmt=s)->SetParent(this);
}

SwitchLabel::SwitchLabel(Stmt *s) {
    Assert(s != NULL);
    label = NULL;
    (stmt=s)->SetParent(this);
}

void SwitchLabel::PrintChildren(int indentLevel) {
    if (label) label->Print(indentLevel+1);
    if (stmt)  stmt->Print(indentLevel+1);
}

SwitchStmt::SwitchStmt(Expr *e, List<Stmt *> *c, Default *d) {
    Assert(e != NULL && c != NULL && c->NumElements() != 0 );
    (expr=e)->SetParent(this);
    (cases=c)->SetParentAll(this);
    def = d;
    if (def) def->SetParent(this);
}

void SwitchStmt::PrintChildren(int indentLevel) {
    if (expr) expr->Print(indentLevel+1);
    if (cases) cases->PrintAll(indentLevel+1);
    if (def) def->Print(indentLevel+1);
}

void StmtBlock::Emit() {
    fprintf(stderr,"Entering StmtBlock\n");
    for (int i = 0; i < stmts->NumElements(); i++) {

        fprintf(stderr,stmts->Nth(i)->GetPrintNameForNode());
        stmts->Nth(i)->Emit(); 
    }
}

void DeclStmt::Emit() {
    fprintf(stderr, "declstmt");
    decl->Emit();
}

void ForStmt::Emit() {
// Create BB for footer, step, body and header
    llvm::LLVMContext *context = Program::irgen.GetContext();
    llvm::Function * f = Program::irgen.GetFunction();

    llvm::BasicBlock *headerBB = llvm::BasicBlock::Create(*context, "loop", f);
    llvm::BasicBlock *bodyBB = llvm::BasicBlock::Create(*context, "body", f);
    llvm::BasicBlock *stepBB = llvm::BasicBlock::Create(*context, "step", f);
    llvm::BasicBlock *footerBB = llvm::BasicBlock::Create(*context, "footer", f);

    init->Emit();

// Emit for initialization
    llvm::BranchInst::Create(headerBB, Program::irgen.currentBlock());
    Program::irgen.pushBlock(headerBB);

    llvm::Value * cond = test->EmitVal();

// create a branch to terminate current BB and start loop header
    llvm::BranchInst::Create(bodyBB, footerBB, cond, Program::irgen.currentBlock());

    Program::irgen.popBlock(); // pop header
    Program::irgen.pushBlock(bodyBB);

// Emit for body
    body->Emit();
    llvm::BranchInst::Create(stepBB, bodyBB);

// Emit for step
    Program::irgen.popBlock(); // pop header
    Program::irgen.pushBlock(stepBB);

    step->Emit();
    llvm::BranchInst::Create(headerBB, stepBB);

    Program::irgen.popBlock();
    Program::irgen.pushBlock(footerBB);
}

void IfStmt::Emit() {
    llvm::Function * f = Program::irgen.GetFunction();
    llvm::LLVMContext *context = Program::irgen.GetContext();
    
    llvm::Value * cond = test->EmitVal();

    llvm::BasicBlock *thenBB = llvm::BasicBlock::Create(*context, "then", f);
    llvm::BasicBlock *footBB = llvm::BasicBlock::Create(*context, "footer", f);

    llvm::BasicBlock *elseBB = NULL;

    if (elseBody) {
        elseBB = llvm::BasicBlock::Create(*context, "else", f);
    }

    Program::irgen.pushBlock(thenBB);

    body->Emit();
    llvm::Instruction * last = &thenBB->back();

    if(!last->isTerminator()) {
        llvm::BranchInst::Create(footBB, thenBB);
    }
    
    Program::irgen.popBlock();

    llvm::BranchInst::Create(thenBB, elseBody ? elseBB : footBB, cond, Program::irgen.currentBlock());

    if (elseBody) {
        Program::irgen.pushBlock(elseBB);
        elseBody->Emit();
        llvm::BranchInst::Create(footBB, elseBB);
        Program::irgen.popBlock();
    }

    Program::irgen.pushBlock(footBB);
}

void ReturnStmt::Emit(){
    llvm::LLVMContext *context = Program::irgen.GetContext();
    if( expr!=NULL ){
        
        llvm::Value * rval = expr->EmitVal();  

        fprintf(stderr, "returning: %s\n", expr->GetPrintNameForNode());
        llvm::ReturnInst::Create(*context, rval, Program::irgen.currentBlock());
    }
    else{

        fprintf(stderr, "%s\n", "returning void");
         llvm::ReturnInst::Create(*context, Program::irgen.currentBlock());


    }
}

void SwitchLabel::Emit() {

}

void Case::Emit() {

}

void SwitchStmt::Emit(){
    llvm::LLVMContext *context = Program::irgen.GetContext();

    llvm::Value * exprV = expr->EmitVal();
    llvm::BasicBlock *footBB = llvm::BasicBlock::Create(*context, "footBB");
    Program::irgen.pushBlock(footBB);

    for(int i =0; i < cases->NumElements();i++){
        llvm::BasicBlock *caseBB = llvm::BasicBlock::Create(*context, "caseBB");
        Program::irgen.pushBlock(caseBB);
        cases->Nth(i)->Emit();//add thenBB param?
        llvm::BranchInst::Create(footBB, caseBB);
    }
    Program::irgen.pushBlock(footBB);


}