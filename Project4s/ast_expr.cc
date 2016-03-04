/* File: ast_expr.cc
 * -----------------
 * Implementation of expression node classes.
 */

#include <string.h>
#include "ast_expr.h"
#include "ast_type.h"
#include "ast_decl.h"


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

llvm::Value * IntConstant::EmitVal() { 
  return llvm::ConstantInt::get(llvm::Type::getInt32Ty(llvm::getGlobalContext()), value, true);
}

llvm::Value * FloatConstant::EmitVal() { 
  return llvm::ConstantFP::get(llvm::Type::getFloatTy(llvm::getGlobalContext()), value);
}

llvm::Value * BoolConstant::EmitVal() { 
  return llvm::ConstantInt::get(llvm::Type::getInt1Ty(llvm::getGlobalContext()), value);
}

llvm::Value * VarExpr::EmitVal() {
    if (Program::irgen.locals().find(string(id->GetName())) == Program::irgen.locals().end()) {
        return NULL;
    }
    return new llvm::LoadInst(Program::irgen.locals()[string(id->GetName())], "", false, Program::irgen.currentBlock());
}

llvm::Value * ArithmeticExpr::EmitVal() {
  llvm::Value * l = left->EmitVal();
  llvm::Value * r = right->EmitVal();

  llvm::Instruction::BinaryOps instr;

  string o = string(op->getToken());
  llvm::Type * type = l->getType();

  if(o == "+") {
    if(type->isIntegerTy()) {
      instr = llvm::Instruction::Add;
    } else { // float
      instr = llvm::Instruction::FAdd;
    }
    
  } else if(o == "-") {
    if(type->isIntegerTy()) {
      instr = llvm::Instruction::Sub;
    } else {
      instr = llvm::Instruction::FSub;
    }

  } else if(o == "*") {
    if(type->isIntegerTy()) {
      instr = llvm::Instruction::Mul;
    } else {
      instr = llvm::Instruction::FMul;
    }
  } else if(o == "/") {
    if(type->isIntegerTy()) {
      instr = llvm::Instruction::SDiv;
    } else {
      instr = llvm::Instruction::FDiv;
    }
  } else {
    return NULL;
  }
  
  return llvm::BinaryOperator::Create(instr, l, r, "", Program::irgen.currentBlock());
}

llvm::Value * RelationalExpr::EmitVal() {
    llvm::Value * l = left->EmitVal();
    llvm::Value * r = right->EmitVal();

    llvm::CmpInst::Predicate instr;

    string o = string(op->getToken());
    
    if(o == "<") {
      instr = llvm::CmpInst::ICMP_SLT;
    } else if(o == "<=") {
      instr = llvm::CmpInst::ICMP_SLE;
    } else if(o == ">") {
      instr = llvm::CmpInst::ICMP_SGT;
    } else if(o == ">=") {
      instr = llvm::CmpInst::ICMP_SGE;
    } else{
      return NULL;
    }

    return llvm::CmpInst::Create( llvm::Instruction::ICmp, instr,
      l, r, "", Program::irgen.currentBlock());
}

llvm::Value * EqualityExpr::EmitVal() {
    llvm::Value * l = left->EmitVal();
    llvm::Value * r = right->EmitVal();

    llvm::CmpInst::Predicate instr;

    string o = string(op->getToken());
    
    if(o == "!=") {
        instr = llvm::CmpInst::ICMP_NE;
    }
    else if(o == "==") {
        instr = llvm::CmpInst::ICMP_EQ;
    }
    else{
      return NULL;
    }

    return llvm::CmpInst::Create( llvm::Instruction::ICmp, instr,
      l, r, "", Program::irgen.currentBlock());
}

llvm::Value * LogicalExpr::EmitVal() {
    llvm::Value * l = left->EmitVal();
    llvm::Value * r = right->EmitVal();

    llvm::Instruction::BinaryOps instr;

    string o = string(op->getToken());
    
    if(o == "&&") {
        instr = llvm::Instruction::And;
    }
    else if(o == "||") {
        instr = llvm::Instruction::Or;
    }
    else{
      return NULL;
    }

    return llvm::BinaryOperator::Create(instr, l, r, "", Program::irgen.currentBlock());
}

llvm::Value * AssignExpr::EmitVal() {
  llvm::Value * r = right->EmitVal();

  if (Program::irgen.locals().find(string(((VarExpr * ) left)->GetName())) == Program::irgen.locals().end()) {
   // std::cerr << "undeclared variable " << lhs.name << std::endl;
    return NULL;
  }

  llvm::Instruction::BinaryOps instr;
  string o = string(op->getToken());
  llvm::Value * lval = Program::irgen.locals()[string(((VarExpr * ) left)->GetName())];

  llvm::Type * type = lval->getType();

  if(o == "=") {
    return new llvm::StoreInst(r, lval, false, Program::irgen.currentBlock());

  } else if(o == "+=") {
    if(type->isIntegerTy()) {
      instr = llvm::Instruction::Add;
    } else { // float
      instr = llvm::Instruction::FAdd;
    }
    
  } else if(o == "-=") {
    if(type->isIntegerTy()) {
      instr = llvm::Instruction::Sub;
    } else {
      instr = llvm::Instruction::FSub;
    }

  } else if(o == "*=") {
    if(type->isIntegerTy()) {
      instr = llvm::Instruction::Mul;
    } else {
      instr = llvm::Instruction::FMul;
    }
  } else if(o == "/=") {
    if(type->isIntegerTy()) {
      instr = llvm::Instruction::SDiv;
    } else {
      instr = llvm::Instruction::FDiv;
    }
  } else {
    return NULL;
  }

  llvm::BinaryOperator::Create(instr, lval, r, "", Program::irgen.currentBlock());
  return new llvm::StoreInst(r, lval, false, Program::irgen.currentBlock());
}

llvm::Value * PostfixExpr::EmitVal(){
  if(left){
    string o = string(op->getToken());
    llvm::Instruction::BinaryOps instr;
    llvm::Value * lval = left->EmitVal();
    if(o == "++"){
      instr = llvm::Instruction::Add;
    }
    else if( o == "--"){
      instr = llvm::Instruction::Sub;

    }
    llvm::LLVMContext *context = Program::irgen.GetContext();

    llvm::BasicBlock *postBB = llvm::BasicBlock::Create(*context, "postBB");
    llvm::BasicBlock *footerBB = llvm::BasicBlock::Create(*context, "footer");

        //increatment l by one
    llvm::ConstantInt * one =  llvm::ConstantInt::get(llvm::Type::getInt32Ty(llvm::getGlobalContext()), 1, true);
    llvm::BinaryOperator::Create(instr, lval, one, "", postBB);

    llvm::BranchInst::Create(postBB, Program::irgen.currentBlock());
    llvm::BranchInst::Create(footerBB, postBB);

    Program::irgen.pushBlock(footerBB);

    return lval;
  }
  return NULL;
}

 
