/* irgen.cc -  LLVM IR generator
 *
 * You can implement any LLVM related functions here.
 */

#include "irgen.h"

IRGenerator::IRGenerator() : 
    context(NULL),
    module(NULL),
    currentFunc(NULL),
    currentBB(NULL)
{
}

IRGenerator::~IRGenerator() {
}

llvm::Module *IRGenerator::GetOrCreateModule(const char *moduleID)
{
   if ( module == NULL ) {
     context = new llvm::LLVMContext();
     module  = new llvm::Module(moduleID, *context);
     module->setTargetTriple(TargetTriple);
     module->setDataLayout(TargetLayout); 
   }
   return module;
}

void IRGenerator::SetFunction(llvm::Function *func) {
   currentFunc = func;
}

void IRGenerator::ExitFunction(){
  currentFunc = NULL;
}

llvm::Function *IRGenerator::GetFunction() const {
   return currentFunc;
}

void IRGenerator::SetBasicBlock(llvm::BasicBlock *bb) {
   currentBB = bb;
}

void IRGenerator::ExitBlock(){
  llvm::BasicBlock* par = currentBB->getSinglePredecessor(); // need to check
  SetBasicBlock(par);
}

llvm::BasicBlock *IRGenerator::GetBasicBlock() const {
   return currentBB;
}

llvm::Type *IRGenerator::GetIntType() const {
   llvm::Type *ty = llvm::Type::getInt32Ty(*context);
   return ty;
}

llvm::Type *IRGenerator::GetBoolType() const {
   llvm::Type *ty = llvm::Type::getInt1Ty(*context);
   return ty;
}

llvm::Type *IRGenerator::GetFloatType() const {
   llvm::Type *ty = llvm::Type::getFloatTy(*context);
   return ty;
}

llvm::Type *IRGenerator::GetVoidType() const {
   llvm::Type *ty = llvm::Type::getVoidTy(*context);
   return ty;
}

llvm::Type *IRGenerator::GetVecType(int n) const {
   llvm::Type *elementTy = llvm::Type::getFloatTy(*context);
   return llvm::VectorType::get(elementTy, n);
}

llvm::Type *IRGenerator::GetMatType(int n) const {
   llvm::Type *elementTy = llvm::Type::getFloatTy(*context);
   llvm::Type *sub = llvm::ArrayType::get(elementTy, n); // sub array

   return llvm::ArrayType::get(sub, n);
}

const char *IRGenerator::TargetLayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128";

const char *IRGenerator::TargetTriple = "x86_64-redhat-linux-gnu";

llvm::Type * IRGenerator::ConvertType(Type * type) {
  char * typeName = type->GetTypeName();

  if(strcmp(typeName, "int") == 0) {
    return GetIntType();

  } else if(strcmp(typeName, "float") == 0) {
    return GetFloatType();

  } else if(strcmp(typeName, "bool") == 0) {
    return GetBoolType();

  } else if(strcmp(typeName, "vec2") == 0) {
    return GetVecType(2);

  } else if(strcmp(typeName, "vec3") == 0) {
    return GetVecType(3);

  } else if(strcmp(typeName, "vec4") == 0) {
    return GetVecType(4);

  } else if(strcmp(typeName, "mat2") == 0) {
    return GetMatType(2);

  } else if(strcmp(typeName, "mat3") == 0) {
    return GetMatType(3);
    
  } else if(strcmp(typeName, "mat4") == 0) {
    return GetMatType(4);

  } else if(strcmp(typeName, "void") == 0) {
    return GetVoidType();

  } else {
    return GetVoidType(); // error
  }
}

