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

void VarDecl::Check() {
    Symbol * symbol = Program::symbolTable->FindSymbol(GetId());
    if (symbol == NULL || symbol->scope != Program::symbolTable->GetScope()) {
        Symbol * newSymbol = (Symbol *) malloc(sizeof(Symbol));
        newSymbol->decl = this;

        Program::symbolTable->AddSymbol(newSymbol);
    } else {
        ReportError::DeclConflict(this, symbol->decl);
    }
}

bool VarDecl::Equals(VarDecl * other) {
    if(GetType()->GetTypeName() == other->GetType()->GetTypeName()) {
        return true;
    }

    return false;
}

void FnDecl::Check() {
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

        for (int i = 0; i < formals->NumElements(); i++) {
            formals->Nth(i)->Check(); // add params to symbol table
        }
        body->Check(); // check body statament block*/


        Program::symbolTable->ExitScope(); // finished with function
    } else {
        ReportError::DeclConflict(this, symbol->decl);

        // check child statements 
        Program::symbolTable->EnterScope(Scope::function);

        for (int i = 0; i < formals->NumElements(); i++) {
            formals->Nth(i)->Check(); // add params to symbol table
        }

        body->Check(); // check body statament block*/
        Program::symbolTable->ExitScope(); // finished with function
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

