#ifndef _H_sym_table
#define _H_sym_table

#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"
#include "location.h"
#include "list.h"
#include "errors.h"

#include <map>
#include <stack>
#include <string> 

using namespace std;

class Decl;
class AssignExpr;

typedef struct Symbol { 
  int scope;

  Decl * decl; // contains id, type, return type, etc
  
  AssignExpr * assignment; // if no assignment, then uninitialized 

  List<int> * references; // variable ref lines - not sure if needed
} Symbol;

class SymbolTable {
  protected:
  	int scope;
    stack<string> scopeStack;
    map<string, stack<Symbol *> > table;
     
  public:
    SymbolTable(){ scope = 0; };
    void EnterScope();
    void ExitScope();
    void AddSymbol(Symbol * sym); 
    Symbol * FindSymbol(string id);
    bool IsSymbolInScope();
};
 
#endif