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
        fprintf(stderr,"couldn't find %s in locals\n", id->GetName());

        return NULL;
    }

    return new llvm::LoadInst(Program::irgen.locals()[string(id->GetName())], "", false, Program::irgen.currentBlock());
}

llvm::Value * ArithmeticExpr::EmitVal() {
  llvm::Value * l = NULL;
  if(left) {
    l = left->EmitVal();
  }
  llvm::Value * r = right->EmitVal();

  llvm::Instruction::BinaryOps instr;

  string o = string(op->getToken());
  llvm::Type * type = r->getType();

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
    if(o == "++") {
      if(type->isIntegerTy()) {
        instr = llvm::Instruction::Add;
      } else { // float
        instr = llvm::Instruction::FAdd;
      }
    } else { // --
      if(type->isIntegerTy()) {
        instr = llvm::Instruction::Sub;
      } else {
        instr = llvm::Instruction::FSub;
      }
    } 
    if(r->getType()==Program::irgen.GetIntType()){
      l = llvm::ConstantInt::get(Program::irgen.GetIntType(), 1);
    }
    else{
      l = llvm::ConstantFP::get(Program::irgen.GetFloatType(), 1);
    }
    llvm::Value * res = llvm::BinaryOperator::Create(instr, l, r, "", Program::irgen.currentBlock());
    llvm::Value * var = Program::irgen.locals()[string(((VarExpr * ) right)->GetName())];

    new llvm::StoreInst(res, var, false, Program::irgen.currentBlock());
    return new llvm::LoadInst(var, "", false, Program::irgen.currentBlock());
  }

  return llvm::BinaryOperator::Create(instr, l, r, "", Program::irgen.currentBlock());
}

llvm::Value * RelationalExpr::EmitVal() {
    llvm::Value * l = left->EmitVal();
    llvm::Value * r = right->EmitVal();

    llvm::CmpInst::Predicate instr;

    string o = string(op->getToken());
    if(l->getType()==Program::irgen.GetIntType()||r->getType()==Program::irgen.GetIntType()){
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
    }else{
      if(o == "<") {
        instr = llvm::CmpInst::FCMP_OLT;
      } else if(o == "<=") {
        instr = llvm::CmpInst::FCMP_OLE;
      } else if(o == ">") {
        instr = llvm::CmpInst::FCMP_OGT;
      } else if(o == ">=") {
        instr = llvm::CmpInst::FCMP_OGE;
      } else{
        return NULL;
      }
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
  string lNode = string(left->GetPrintNameForNode());

  if(lNode == "FieldAccess") {
    return SwizzleAssign();

  } else { 
    return VariableAssign();
  }
}

llvm::Value * AssignExpr::SwizzleAssign() {
  llvm::Value * r = right->EmitVal();

  llvm::Type * type = left->EmitVal()->getType();

  string b = string(((FieldAccess*)left)->field->GetName());
  int n = strlen(((FieldAccess*)left)->field->GetName());
  int i = 0;

  llvm::Value * vec = ((FieldAccess*)left)->base->EmitVal();

  VarExpr * base = (VarExpr *)((FieldAccess*)left)->base;
  llvm::Value * addr = Program::irgen.locals()[string(base->GetName())];

  llvm::Instruction::BinaryOps instr;
  string o = string(op->getToken());
  
  if(o == "=") {
    if(type->isVectorTy()) {  //1. assign vec
      llvm::Value * newVec = vec;
      for(; i < n; i++) {
        llvm::Constant * index1 = llvm::ConstantInt::get(Program::irgen.GetIntType(), i);
        llvm::Constant * index2 = getSwizzleIndex(b.at(i));

        llvm::Value * element = llvm::ExtractElementInst::Create(r, index1, "", Program::irgen.currentBlock());
        llvm::Value * newVec = llvm::InsertElementInst::Create (vec, element, index2, "", Program::irgen.currentBlock());
        
        new llvm::StoreInst(newVec, addr, false, Program::irgen.currentBlock());
        vec = newVec;
      }

    } else { //2. assign float
      llvm::Constant * index = getSwizzleIndex(b.at(i));
      llvm::Value * newVec = llvm::InsertElementInst::Create (vec, r, index, "", Program::irgen.currentBlock());

      new llvm::StoreInst(newVec, addr, false, Program::irgen.currentBlock());
    }

    return left->EmitVal();

  } else if(o == "+=") {
    instr = llvm::Instruction::FAdd;
    
  } else if(o == "-=") {
    instr = llvm::Instruction::FSub;

  } else if(o == "*=") {
    instr = llvm::Instruction::FMul;

  } else if(o == "/=") {
    instr = llvm::Instruction::FDiv;

  } else {
    return NULL;
  }

  if(type->isVectorTy()) {  //1. assign vec
    llvm::Value * newVec = vec;
    for(; i < n; i++) {
      llvm::Constant * index1 = llvm::ConstantInt::get(Program::irgen.GetIntType(), i);
      llvm::Constant * index2 = getSwizzleIndex(b.at(i));

      llvm::Value * r_element = llvm::ExtractElementInst::Create(r, index1, "", Program::irgen.currentBlock());
      llvm::Value * l_element = llvm::ExtractElementInst::Create(vec, index2, "", Program::irgen.currentBlock());
      llvm::Value * res = llvm::BinaryOperator::Create(instr, l_element, r_element, "", Program::irgen.currentBlock());
      
      llvm::Value * newVec = llvm::InsertElementInst::Create (vec, res, index2, "", Program::irgen.currentBlock());
      
      new llvm::StoreInst(newVec, addr, false, Program::irgen.currentBlock());
      vec = newVec;
    }

  } else { //2. assign float
    llvm::Value * newVec = vec;
    for(; i < n; i++) {
      llvm::Constant * index = getSwizzleIndex(b.at(i));

      llvm::Value * element = llvm::ExtractElementInst::Create(vec, index, "", Program::irgen.currentBlock());
      llvm::Value * res = llvm::BinaryOperator::Create(instr, element, r, "", Program::irgen.currentBlock());

      llvm::Value * newVec = llvm::InsertElementInst::Create (vec, res, index, "", Program::irgen.currentBlock());

      new llvm::StoreInst(newVec, addr, false, Program::irgen.currentBlock());
      vec = newVec;
    }
  }

  return left->EmitVal();
}

llvm::Value * AssignExpr::VariableAssign() {
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
    new llvm::StoreInst(r, lval, false, Program::irgen.currentBlock());
    return left->EmitVal();

  } else if(o == "+=") {
    if(type->isIntegerTy()) {
      instr = llvm::Instruction::Add;
    } else { // float or vec
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
  llvm::Value * lvalue = new llvm::LoadInst(Program::irgen.locals()[string(((VarExpr * ) left)->GetName())], "", false, Program::irgen.currentBlock());
  llvm::Value * res = llvm::BinaryOperator::Create(instr, lvalue, r, "", Program::irgen.currentBlock());
  new llvm::StoreInst(res, lval, false, Program::irgen.currentBlock());

  return left->EmitVal();
}

llvm::Value * PostfixExpr::EmitVal(){
  string o = string(op->getToken());
  llvm::Instruction::BinaryOps instr;

  llvm::LLVMContext *context = Program::irgen.GetContext();
  llvm::Function * f = Program::irgen.GetFunction();

  if(left){
    llvm::Value * lval = left->EmitVal();
    if(o == "++"){
      instr = llvm::Instruction::Add;
    }
    else { // --
      instr = llvm::Instruction::Sub;

    }

    llvm::BasicBlock *postBB = llvm::BasicBlock::Create(*context, "postBB", f);
    llvm::BranchInst::Create(postBB, Program::irgen.currentBlock());
    Program::irgen.pushBlock(postBB);

        //increatment l by one
    llvm::Value * one;
    if(lval->getType()==Program::irgen.GetIntType()){
      one = llvm::ConstantInt::get(Program::irgen.GetIntType(), 1);
    }
    else{
      one = llvm::ConstantFP::get(Program::irgen.GetFloatType(), 1);
    }
    llvm::Value * res = llvm::BinaryOperator::Create(instr, lval, one, "", Program::irgen.currentBlock());
    llvm::Value * var = Program::irgen.locals()[string(((VarExpr * ) left)->GetName())];
    new llvm::StoreInst(res, var, false, Program::irgen.currentBlock());

    return lval;
  } 

  return NULL; 
}

llvm::Value * FieldAccess::EmitVal() {
  string b = string(field->GetName());
  int n = strlen(field->GetName());
  int i = 0;

  llvm::Value * vec = base->EmitVal();

  if(n == 1) { // float
    llvm::Constant * index = getSwizzleIndex(b.at(i));

    return llvm::ExtractElementInst::Create(vec, index, "", Program::irgen.currentBlock());

  } else { // vec2,3,4
    std::vector<llvm::Constant *> indices;
    for(; i < n; i++) {
      llvm::Constant * index = getSwizzleIndex(b.at(i));
      indices.push_back(index);
    }
    llvm::Constant * mask = llvm::ConstantVector::get(indices);
    return new llvm::ShuffleVectorInst(vec, vec, mask, "", Program::irgen.currentBlock());
  }
}

llvm::Constant * Expr::getSwizzleIndex(char c) {
  if(c == 'x') {
    return llvm::ConstantInt::get(Program::irgen.GetIntType(), 0);
  } else if(c == 'y') {
    return llvm::ConstantInt::get(Program::irgen.GetIntType(), 1);
  } else if(c == 'z') {
    return llvm::ConstantInt::get(Program::irgen.GetIntType(), 2);
  } else { //w
    return llvm::ConstantInt::get(Program::irgen.GetIntType(), 3);
  }
}
 
