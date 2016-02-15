/* File: ast_expr.cc
 * -----------------
 * Implementation of expression node classes.
 */

#include <string.h>
#include "ast_expr.h"
#include "ast_type.h"
#include "ast_decl.h"
#include <regex.h>


IntConstant::IntConstant(yyltype loc, int val) : Expr(loc) {
    value = val;
}
void IntConstant::PrintChildren(int indentLevel) { 
    printf("%d", value);
}

FloatConstant::FloatConstant(yyltype loc, double val) : Expr(loc) {
    value = val;
}
void FloatConstant::PrintChildren(int indentLevel) { 
    printf("%g", value);
}

BoolConstant::BoolConstant(yyltype loc, bool val) : Expr(loc) {
    value = val;
}
void BoolConstant::PrintChildren(int indentLevel) { 
    printf("%s", value ? "true" : "false");
}

VarExpr::VarExpr(yyltype loc, Identifier *ident) : Expr(loc) {
    Assert(ident != NULL);
    this->id = ident;
}

void VarExpr::PrintChildren(int indentLevel) {
    id->Print(indentLevel+1);
}

Operator::Operator(yyltype loc, const char *tok) : Node(loc) {
    Assert(tok != NULL);
    strncpy(tokenString, tok, sizeof(tokenString));
}

void Operator::PrintChildren(int indentLevel) {
    printf("%s",tokenString);
}

CompoundExpr::CompoundExpr(Expr *l, Operator *o, Expr *r) 
  : Expr(Join(l->GetLocation(), r->GetLocation())) {
    Assert(l != NULL && o != NULL && r != NULL);
    (op=o)->SetParent(this);
    (left=l)->SetParent(this); 
    (right=r)->SetParent(this);
}

CompoundExpr::CompoundExpr(Operator *o, Expr *r) 
  : Expr(Join(o->GetLocation(), r->GetLocation())) {
    Assert(o != NULL && r != NULL);
    left = NULL; 
    (op=o)->SetParent(this);
    (right=r)->SetParent(this);
}

CompoundExpr::CompoundExpr(Expr *l, Operator *o) 
  : Expr(Join(l->GetLocation(), o->GetLocation())) {
    Assert(l != NULL && o != NULL);
    (left=l)->SetParent(this);
    (op=o)->SetParent(this);
}

void CompoundExpr::PrintChildren(int indentLevel) {
   if (left) left->Print(indentLevel+1);
   op->Print(indentLevel+1);
   if (right) right->Print(indentLevel+1);
}
   
  
ArrayAccess::ArrayAccess(yyltype loc, Expr *b, Expr *s) : LValue(loc) {
    (base=b)->SetParent(this); 
    (subscript=s)->SetParent(this);
}

void ArrayAccess::PrintChildren(int indentLevel) {
    base->Print(indentLevel+1);
    subscript->Print(indentLevel+1, "(subscript) ");
  }
     
FieldAccess::FieldAccess(Expr *b, Identifier *f) 
  : LValue(b? Join(b->GetLocation(), f->GetLocation()) : *f->GetLocation()) {
    Assert(f != NULL); // b can be be NULL (just means no explicit base)
    base = b; 
    if (base) base->SetParent(this); 
    (field=f)->SetParent(this);
}


  void FieldAccess::PrintChildren(int indentLevel) {
    if (base) base->Print(indentLevel+1);
    field->Print(indentLevel+1);
  }

Call::Call(yyltype loc, Expr *b, Identifier *f, List<Expr*> *a) : Expr(loc)  {
    Assert(f != NULL && a != NULL); // b can be be NULL (just means no explicit base)
    base = b;
    if (base) base->SetParent(this);
    (field=f)->SetParent(this);
    (actuals=a)->SetParentAll(this);
}

 void Call::PrintChildren(int indentLevel) {
    if (base) base->Print(indentLevel+1);
    if (field) field->Print(indentLevel+1);
    if (actuals) actuals->PrintAll(indentLevel+1, "(actuals) ");
  }

void VarExpr::Check() {
  string varName = string(id->GetName());

  if(!Program::symbolTable->IsSymbolInScope(varName)) { // not in scope
    ReportError::IdentifierNotDeclared(id, LookingForVariable);
  } else if(Program::symbolTable->FindSymbol(varName)->assignment == NULL){ // not initialized
    // maybe throw error - not sure
    
  }
}

Type * VarExpr::GetType() {
  // return type 
  
  string varName = string(id->GetName());

  if(!Program::symbolTable->IsSymbolInScope(varName)) { // not in scope
    ReportError::IdentifierNotDeclared(id, LookingForVariable);
    return Type::voidType;

  } else {
    Symbol * symbol = Program::symbolTable->FindSymbol(varName);
    VarDecl * var = (VarDecl *) symbol->decl;
    return var->GetType();
  }
}

void RelationalExpr::Check() {
  Type * l = left->GetType();
  Type * r = right->GetType();
  if(l->GetTypeName() != r->GetTypeName()) {
    ReportError::IncompatibleOperands(op, l, r);
    
  } else if (l->GetTypeName() != Type::intType->GetTypeName() && 
             l->GetTypeName() != Type::floatType->GetTypeName()) {
     ReportError::IncompatibleOperands(op, l, r);

  }
}

Type * RelationalExpr::GetType() {
  Type * l = left->GetType();
  Type * r = right->GetType();
  if(l->GetTypeName() != r->GetTypeName()) {
    ReportError::IncompatibleOperands(op, l, r);
    return Type::voidType;
    
  } else if (l->GetTypeName() != Type::intType->GetTypeName() && 
             l->GetTypeName() != Type::floatType->GetTypeName()) {
     ReportError::IncompatibleOperands(op, l, r);
     return Type::voidType;

  } else {
    return Type::boolType;
  }
}

void EqualityExpr::Check() {
  Type * l = left->GetType();
  Type * r = right->GetType();
  if(l->GetTypeName() != r->GetTypeName()) {
    ReportError::IncompatibleOperands(op, l, r);
  } 
}

Type * EqualityExpr::GetType() {

  Type * l = left->GetType();
  Type * r = right->GetType();
  if(l->GetTypeName() != r->GetTypeName()) {
    ReportError::IncompatibleOperands(op, l, r);
    return Type::voidType;

  } else {
    return Type::boolType;
  }
}

void LogicalExpr::Check() {
  Type * l = left->GetType();
  Type * r = right->GetType();
  if(l->GetTypeName() != r->GetTypeName()) {
    ReportError::IncompatibleOperands(op, l, r);

  } else if (l->GetTypeName() != Type::boolType->GetTypeName()) {
     ReportError::IncompatibleOperands(op, l, r);
  }
}

Type * LogicalExpr::GetType() {
  Type * l = left->GetType();
  Type * r = right->GetType();
  if(l->GetTypeName() != r->GetTypeName()) {
    ReportError::IncompatibleOperands(op, l, r);
    return Type::voidType;

  } else if (l->GetTypeName() != Type::boolType->GetTypeName()) {
     ReportError::IncompatibleOperands(op, l, r);
     return Type::voidType;

  } else {
    return Type::boolType;
  }
}

void AssignExpr::Check() {
  Type * l = left->GetType();
  Type * r = right->GetType();
  if(l->GetTypeName() != r->GetTypeName()) {
    if(l->GetTypeName()!= Type::voidType->GetTypeName() &&
       r->GetTypeName()!= Type::voidType->GetTypeName()){
      ReportError::IncompatibleOperands(op, l, r);
    }
  } 
}

Type * AssignExpr::GetType() {
  Type * l = left->GetType();
  Type * r = right->GetType();
  if(l->GetTypeName() != r->GetTypeName()) {
    if(l->GetTypeName() != Type::voidType->GetTypeName() && 
       r->GetTypeName() != Type::voidType->GetTypeName()){
      ReportError::IncompatibleOperands(op, l, r);
    }
    return Type::voidType;
  } else {
    return left->GetType();
  }
}

void ArithmeticExpr::Check() {
  Type * l = left->GetType();
  Type * r = right->GetType();
  if(l->GetTypeName() != r->GetTypeName()) {
    ReportError::IncompatibleOperands(op, l, r);

  } else if (l->GetTypeName() != Type::intType->GetTypeName() && 
             l->GetTypeName() != Type::floatType->GetTypeName()) {
     ReportError::IncompatibleOperands(op, l, r);
  } 
}

Type * ArithmeticExpr::GetType() {
  Type * l = left->GetType();
  Type * r = right->GetType();
  if(l->GetTypeName() != r->GetTypeName()) {
    ReportError::IncompatibleOperands(op, l, r);
    return Type::voidType;
  } else if (l->GetTypeName() != Type::intType->GetTypeName() && 
             l->GetTypeName() != Type::floatType->GetTypeName()) {
     ReportError::IncompatibleOperands(op, l, r);
     return Type::voidType;
  } else {
    return l;
  }
}

void PostfixExpr::Check(){
  Type * l = left->GetType();
  if(l->GetTypeName() != Type::intType->GetTypeName() && 
    l->GetTypeName() != Type::floatType->GetTypeName()){
      ReportError::IncompatibleOperand(op, l);
  }
}

Type * PostfixExpr::GetType(){
  Type * l = left->GetType();
  if(l->GetTypeName() != Type::intType->GetTypeName() && 
    l->GetTypeName() != Type::floatType->GetTypeName()){
      ReportError::IncompatibleOperand(op, l);
      return Type::voidType;
  }
  else{
    return l;
  }
}

void FieldAccess::Check() {
  string type = base->GetType()->GetTypeName();

  if(type != Type::vec2Type->GetTypeName() &&
     type != Type::vec3Type->GetTypeName() &&
     type != Type::vec4Type->GetTypeName()) {

    ReportError::InaccessibleSwizzle(field, base);
  } else {

    int err;
    regex_t swizzle;

    regcomp(&swizzle, "[xyzw]+", REG_EXTENDED);

    err = regexec(&swizzle, field->GetName(), 0, NULL, REG_EXTENDED);

    if (err) {
      ReportError::InvalidSwizzle(field, base);
    } else {
      if(strlen(field->GetName()) > 4) {
        ReportError::OversizedVector(field, base);
      }

      if(type == Type::vec2Type->GetTypeName()) {

        char * z = strchr(field->GetName(), 'z');
        char * w = strchr(field->GetName(), 'w');

        if (z != NULL || w != NULL) {
          err = 1;
        }

      } else if(type == Type::vec3Type->GetTypeName()) {
        char * w = strchr(field->GetName(), 'w');
        
        if (w != NULL) {
          err = 1;
        }
      }

      if(err) {
        ReportError::SwizzleOutOfBound(field, base);
      } 
    }
  }
}
