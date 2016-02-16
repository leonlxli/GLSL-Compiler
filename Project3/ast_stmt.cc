/* File: ast_stmt.cc
 * -----------------
 * Implementation of statement node classes.
 */
#include "ast_stmt.h"
#include "ast_type.h"
#include "ast_decl.h"
#include "ast_expr.h"
#include "errors.h"
#include <string.h>


SymbolTable * Program::symbolTable = new SymbolTable();

Program::Program(List<Decl*> *d) {
    Assert(d != NULL);
    (decls=d)->SetParentAll(this);
    //PrintChildren(1);
}

void Program::PrintChildren(int indentLevel) {
    decls->PrintAll(indentLevel+1);
}

void Program::Check() {
    /* pp3: here is where the semantic analyzer is kicked off.
     *      The general idea is perform a tree traversal of the
     *      entire program, examining all constructs for compliance
     *      with the semantic rules.  Each node can have its own way of
     *      checking itself, which makes for a great use of inheritance
     *      and polymorphism in the node classes.
     */

    // PrintChildren(0);

    symbolTable->EnterScope(Scope::global);

    for (int i = 0; i < decls->NumElements(); i++) {
        decls->Nth(i)->Check();
    }

    symbolTable->ExitScope(); // finish
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
  
SwitchLabel::SwitchLabel(yyltype loc, Expr *l, Stmt *s) : Stmt(loc){
    Assert(l != NULL && s != NULL);
    (label=l)->SetParent(this);
    (stmt=s)->SetParent(this);
}

SwitchLabel::SwitchLabel(yyltype loc, Stmt *s) : Stmt(loc){
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

void ConditionalStmt::Check(){
    if(!(Program::symbolTable->FindScope(Scope::function))){
        ReportError::ConditionOutsideFunction(this);
    }
    else{
        return;
    }
}

void StmtBlock::Check(){
    for (int i = 0; i < decls->NumElements(); i++) {
        decls->Nth(i)->Check();
    }
    for (int i = 0; i < stmts->NumElements(); i++) {
        stmts->Nth(i)->GetPrintNameForNode();
        stmts->Nth(i)->Check();
    }
}

void ForStmt::Check(){
    // printf("hello");
    Program::symbolTable->EnterScope(Scope::loop);
    init->Check();

    string type = test->GetType()->GetTypeName();
    if(type != Type::boolType->GetTypeName() && type != Type::errorType->GetTypeName()){
        ReportError::TestNotBoolean(test);
    }
    step->Check();
    body->Check();
    Program::symbolTable->ExitScope();

}


void WhileStmt::Check(){
    Program::symbolTable->EnterScope(Scope::loop);

    string type = test->GetType()->GetTypeName();
    if(type != Type::boolType->GetTypeName() && type != Type::errorType->GetTypeName()){
        ReportError::TestNotBoolean(test);
    }
    body->Check();
    Program::symbolTable->ExitScope();
}

void IfStmt::Check(){
    Program::symbolTable->EnterScope(Scope::If);
    
    string type = test->GetType()->GetTypeName();
    if(type != Type::boolType->GetTypeName() && type != Type::errorType->GetTypeName()){
        ReportError::TestNotBoolean(test);
    }
    body->Check();
    Program::symbolTable->ExitScope();

    if(elseBody!=NULL){
        Program::symbolTable->EnterScope(Scope::If);
        elseBody->Check();
        Program::symbolTable->ExitScope();
    }
}

void DeclStmt::Check(){
    decl->Check();
}

void SwitchStmt::Check(){
    Program::symbolTable->EnterScope(Scope::_switch);
        Type * type = expr->GetType();
        for (int i = 0; i < cases->NumElements(); i++) {
            if(strcmp(cases->Nth(i)->GetPrintNameForNode(),"Default")==0 && i<cases->NumElements()-1){
                ReportError::DefaultNotLast(cases->Nth(i));
            }
            else if(strcmp(cases->Nth(i)->GetPrintNameForNode(),"Case")==0) {
                cases->Nth(i)->Check(type);
            }
            else{
                cases->Nth(i)->Check();
            }
        }
        if(def!=NULL){
            def->Check();
        }
    Program::symbolTable->ExitScope();
}

void Case::Check(){
    ReportError::CaseOutSideSwitch(this);
}

void Case::Check(Type * type){
    Type * caseType = label->GetType();
    if(label->GetType()->GetTypeName() != type->GetTypeName()&&type!=Type::errorType){
        ReportError::CaseSwitchMisMatch(label, caseType, type);
    }
    stmt->Check();
}

void Default::Check(){
    if(!(Program::symbolTable->FindScope(Scope::_switch))){
        //printf("uhoh");
        ReportError::DefaultOutSideSwitch(this);
    }
    stmt->Check();
}

void ContinueStmt::Check(){
    if(!(Program::symbolTable->FindScope(Scope::loop))){
        ReportError::ContinueOutsideLoop(this);
    }
}

void BreakStmt::Check(){
    if(!(Program::symbolTable->FindScope(Scope::loop)||Program::symbolTable->FindScope(Scope::_switch))){
        ReportError::BreakOutsideLoop(this);
    }
}


void ReturnStmt::Check() {

    FnDecl * function = Program::symbolTable->currentFunction;
    Type * fType = function->GetType();

    if(expr == NULL && (fType->GetTypeName() != Type::voidType->GetTypeName())) { // function return should be void 
        if(fType->GetTypeName() != Type::errorType->GetTypeName()) {
            ReportError::ReturnMismatch(this, Type::voidType, fType);
            return;
        }

    } else if(expr != NULL) { 
        string returnType = expr->GetType()->GetTypeName();

        if(returnType != fType->GetTypeName() && returnType != Type::errorType->GetTypeName()) {
            ReportError::ReturnMismatch(this, expr->GetType(), function->GetType());
            return;
        }
    } 

    Program::symbolTable->returnFlag = true;
}

