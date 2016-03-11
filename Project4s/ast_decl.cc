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
    llvm::Function * currentFunc = Program::irgen.GetFunction();
    llvm::Type *llvmType = Program::irgen.ConvertType(type);

    if(currentFunc == NULL) { // global var

        llvm::Value * memoryLocation = new llvm::GlobalVariable (
            *Program::irgen.GetOrCreateModule(NULL),
            llvmType, 
            false, // is constant
            llvm::GlobalValue::ExternalLinkage, 
            NULL, // initializer
            id->GetName());
            
            Program::irgen.globals[string(id->GetName())] = memoryLocation;

    } else { // local var
        llvm::AllocaInst * alloc = new llvm::AllocaInst (
            llvmType, 
            id->GetName(), 
            Program::irgen.currentBlock()); // insert at end of basic block

        Program::irgen.locals()[string(id->GetName())] = alloc; // add to symbol table 

    }

}

void FnDecl::Emit() {
    // create a function signature
    llvm::Type *ret = Program::irgen.ConvertType(returnType);
    std::vector<llvm::Type *> argTypes;

    for (int i = 0; i < formals->NumElements(); i++) {

        llvm::Type *t = Program::irgen.ConvertType(formals->Nth(i)->GetType());
        argTypes.push_back(t);
    }

    llvm::ArrayRef<llvm::Type *> argArray(argTypes);
    llvm::FunctionType *funcTy = llvm::FunctionType::get(ret, argArray, false);
    
    llvm::Module *mod = Program::irgen.GetOrCreateModule(NULL);
    llvm::Function *f = llvm::cast<llvm::Function>(mod->getOrInsertFunction(id->GetName(), funcTy));

    llvm::LLVMContext *context = Program::irgen.GetContext();
    llvm::BasicBlock *bb = llvm::BasicBlock::Create(*context, "entry", f);

    Program::irgen.pushBlock(bb);
    Program::irgen.SetFunction(f); // set function

    llvm::Function::arg_iterator args = f->arg_begin();

    for(int i = 0; i < formals->NumElements(); args++, i++) {
        string param = string(formals->Nth(i)->GetIdentifier()->GetName());
        args->setName(param);

        llvm::AllocaInst * alloc = new llvm::AllocaInst (
            argTypes[i], 
            "Test", 
            Program::irgen.currentBlock()); // insert at end of basic block
        
        Program::irgen.locals()[param] = alloc; // add to symbol table 

        new llvm::StoreInst(args, alloc, false, bb);
    }


    body->Emit();
    if(Program::irgen.currentBlock()->getTerminator()==NULL){
        llvm::ReturnInst::Create(*context, Program::irgen.currentBlock());
    }
    Program::irgen.ExitFunction();
    Program::irgen.popBlock();
}


