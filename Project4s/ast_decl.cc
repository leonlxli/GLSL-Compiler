/* File: ast_decl.cc
 * -----------------
 * Implementation of Decl node classes.
 */
#include "ast_decl.h"
#include "ast_type.h"
#include "ast_stmt.h"
        
         
Decl::Decl(Identifier *n) : Node(*n->GetLocation()) {
    Assert(n != NULL);
    (id=n)->SetParent(this); 
}


VarDecl::VarDecl(Identifier *n, Type *t) : Decl(n) {
    Assert(n != NULL && t != NULL);
    (type=t)->SetParent(this);
}
  
void VarDecl::PrintChildren(int indentLevel) { 
   if (type) type->Print(indentLevel+1);
   if (id) id->Print(indentLevel+1);
}


FnDecl::FnDecl(Identifier *n, Type *r, List<VarDecl*> *d) : Decl(n) {
    Assert(n != NULL && r!= NULL && d != NULL);
    (returnType=r)->SetParent(this);
    (formals=d)->SetParentAll(this);
    body = NULL;
}

void FnDecl::SetFunctionBody(Stmt *b) { 
    (body=b)->SetParent(this);
}

void FnDecl::PrintChildren(int indentLevel) {
    if (returnType) returnType->Print(indentLevel+1, "(return type) ");
    if (id) id->Print(indentLevel+1);
    if (formals) formals->PrintAll(indentLevel+1, "(formals) ");
    if (body) body->Print(indentLevel+1, "(body) ");
}

void VarDecl::Emit() {
    llvm::Function * currentFunc = Program::irgen.GetCurrentFunction();
    llvm::Type *llvmType = Program::irgen.ConvertType(type); // todo - get actual type

    if(currentFunc == NULL) { // global var

        llvm::GlobalVariable * var = new llvm::GlobalVariable (
            llvmType, 
            false, // is constant
            llvm::GlobalValue::CommonLinkage, 
            NULL, // initializer
            id->GetName());

        (void) var; // useless line for getting rid of unused var warning

    } else { // local var
        // get insert position
        // create local variable 
        llvm::AllocaInst * var = new llvm::AllocaInst (
            llvmType, 
            id->GetName(), 
            Program::irgen.GetCurrentBB()); // insert at end of basic block

        (void) var; // useless line for getting rid of unused var warning
    }
}

void FnDecl::Emit() {
    // create a function signature
    std::vector<llvm::Type *> argTypes;

    llvm::Type *ty = Program::irgen.ConvertType(returnType);
    argTypes.push_back(ty);
    llvm::ArrayRef<llvm::Type *> argArray(argTypes);
    llvm::FunctionType *funcTy = llvm::FunctionType::get(ty, argArray, false);
    // llvm::Function *f = llvm::cast<llvm::Function>(mod->getOrInsertFunction("foo", intTy, intTy, (Type *)0));
    llvm::Module *mod = Program::irgen.GetOrCreateModule(NULL);
    llvm::Function *f = llvm::cast<llvm::Function>(mod->getOrInsertFunction(id->GetName(), funcTy));
    // llvm::Argument *arg = f->arg_begin();
    //List<llvm::Argument*> argList = f->getArgumentList();
    // for(int i=0, llvm::Function::arg_iterator *iterator = f->arg_begin(); iterator != f->arg_end(); iterator++;i++) {
    //     *iterator->setName(formals->Nth(i)->id->GetName());
    // }
    // for (int i = 0; i < formals->NumElements(); i++) {
    //     arg->setName(formals->Nth(i)->id->GetName());

    // }
    // arg->setName("x");

    // insert a block into the runction
    // llvm::LLVMContext *context = Program::irgen.GetContext();
    // llvm::BasicBlock *bb = llvm::BasicBlock::Create(*context, "entry", f);

    // create a return instruction
    // llvm::Value *val = llvm::ConstantInt::get(ty, 1);
    // llvm::Value *sum = llvm::BinaryOperator::CreateAdd(arg, val, "", bb);
    // llvm::ReturnInst::Create(*context, sum, bb);
}


