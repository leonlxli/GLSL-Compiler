#ifndef _H_sym_table
#define _H_sym_table

#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "errors.h"
#include <list>
#include <map>
#include <stack>
#include <string> 
#include <algorithm>

using namespace std;

class Decl;
class AssignExpr;

namespace Scope {
enum Scope { 
		global, 
		function, 
		If, 
		loop, 
		_switch
	};
}

typedef struct Symbol { 
  int scope;
  bool isFunction;

  Decl * decl; // contains id, type, return type, etc
  
  AssignExpr * assignment; // if no assignment, then uninitialized 
  
} Symbol;

class SymbolTable {
  protected:
  	int scope;
    stack<string> scopeStack;
    map<string, stack<Symbol *> > table;
    list<int> scopeList;
  public:
  	FnDecl * currentFunction;
    bool returnFlag;

    SymbolTable(){ scope = 0;}

    bool FindScope(int scope);
    void EnterScope(int scope);
    void ExitScope();

    void AddSymbol(Symbol * sym); 
    Symbol * FindSymbol(string id);
    bool IsSymbolInScope(string id);

    int GetScope(){return scope;}

    void PrintSymbolTable();
};
 
#endif