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

string Decl::GetId() {
    return string(id->GetName());
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

bool VarDecl::Equals(VarDecl * other) {
    if(GetType()->GetTypeName() == other->GetType()->GetTypeName()) {
        return true;
    }

    return false;
}

void VarDecl::Emit() {
    Symbol * symbol = Program::symbolTable->FindSymbol(GetId());
    if (symbol == NULL || symbol->scope != Program::symbolTable->GetScope()) {
        Symbol * newSymbol = (Symbol *) malloc(sizeof(Symbol));
        newSymbol->decl = this;
        newSymbol->isFunction = false;

        Program::symbolTable->AddSymbol(newSymbol);
    } else {
        //ReportError::DeclConflict(this, symbol->decl);
    }

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

bool FnDecl::Equals(FnDecl * other) {
    if(formals->NumElements() != other->formals->NumElements()) {
        return false;
    }
    for (int i = 0; i < formals->NumElements(); i++) {
        if(!formals->Nth(i)->Equals(other->formals->Nth(i))) {
            return false;
        }
    }

    return true;
}

void FnDecl::Emit() {

    Program::symbolTable->currentFunction = this;
    Symbol * symbol = Program::symbolTable->FindSymbol(GetId());

    if (symbol == NULL || 
        symbol->scope != Program::symbolTable->GetScope() ||
        (symbol->isFunction && !Equals((FnDecl *) symbol->decl))) {

        Symbol * newSymbol = (Symbol *) malloc(sizeof(Symbol));
        newSymbol->decl = this;
        newSymbol->isFunction = true;

        Program::symbolTable->AddSymbol(newSymbol);

        // check child statements 
        Program::symbolTable->EnterScope(Scope::function);

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

        llvm::Function::arg_iterator args = f->arg_begin();

        for(int i = 0; args != f->arg_end(); args++, i++) {
            args->setName(formals->Nth(i)->GetIdentifier()->GetName());
        }

        Program::irgen.SetFunction(f); // set function

        body->Emit();

        Program::irgen.ExitFunction();


        Program::symbolTable->ExitScope(); // finished with function
    } else {
        //ReportError::DeclConflict(this, symbol->decl);
    }
}


