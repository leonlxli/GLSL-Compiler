#ifndef _H_sym_table
#define _H_sym_table

#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"
#include "location.h"
#include "list.h"
#include "errors.h"

#include "ast_decl.h"
#include "ast_expr.h"

#include <map>
#include <stack>
#include <string> 

using namespace std;

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
    void OpenScope();
    void CloseScope();
    void AddSymbol(Symbol * sym); 
};
 
#endif