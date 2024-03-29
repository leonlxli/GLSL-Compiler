/**
 * File: irgen.h
 * ----------- 
 *  This file defines a class for LLVM IR Generation.
 *
 *  All LLVM instruction related functions or utilities can be implemented
 *  here. You'll need to customize this class heavily to provide any helpers
 *  or untility as you need.
 */

#ifndef _H_IRGen
#define _H_IRGen

// LLVM headers
#include "llvm/IR/Module.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Constants.h"

#include "ast_type.h"

#include <stack>
#include <map>

class CodeGenBlock {
public:
    llvm::BasicBlock *block;
    std::map<std::string, llvm::Value*> locals;
};

class IRGenerator {
  private:
    std::stack<CodeGenBlock *> blocks;
    llvm::Function *mainFunction;

    llvm::LLVMContext *context;
    llvm::Module      *module;
    // track which function or basic block is active
    llvm::Function    *currentFunc;
    llvm::BasicBlock  *currentBB;

    static const char *TargetTriple;
    static const char *TargetLayout;

  public:
    bool foundReturn;
    std::map<std::string, llvm::Value*> globals;

    IRGenerator();
    ~IRGenerator();

    llvm::Module   *GetOrCreateModule(const char *moduleID);
    llvm::LLVMContext *GetContext() const { return context; }

    // Add your helper functions here
    llvm::Function *GetFunction() const;
    void      SetFunction(llvm::Function *func);
    void ExitFunction();

    llvm::BasicBlock *GetBasicBlock() const;

    llvm::Type *GetIntType() const;
    llvm::Type *GetBoolType() const;
    llvm::Type *GetFloatType() const;
    llvm::Type *GetVoidType() const;
    llvm::Type *GetVecType(int n) const;
    llvm::Type *GetMatType(int n) const;
    llvm::Type * ConvertType(Type * Type);

    llvm::BasicBlock * currentLoopFooter;
    llvm::BasicBlock * currentLoopHeader;

    std::map<std::string, llvm::Value*>& locals() { return blocks.top()->locals; }

    llvm::BasicBlock *currentBlock() { return blocks.top()->block; }
    void pushBlock(llvm::BasicBlock *block) { 
        CodeGenBlock * cgb = new CodeGenBlock();

        if(!blocks.empty()) {
            std::map<std::string, llvm::Value*> parentLocals = blocks.top()->locals;
            cgb->locals = parentLocals;
        }
        if(blocks.empty()&&!globals.empty()){
            std::map<std::string, llvm::Value*> parentLocals = globals;
            cgb->locals = parentLocals;
        }

        cgb->block = block;
        blocks.push(cgb); 
    }
    void popBlock() { 
        CodeGenBlock *top = blocks.top(); 
        blocks.pop(); 
        delete top; 
    }
};
   
#endif
