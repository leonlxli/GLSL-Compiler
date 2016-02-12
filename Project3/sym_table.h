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
		conditional, 
		loop, 
		_switch, 
		_case 
	};
}

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
    list<int> scopeList;
  public:
    SymbolTable(){ scope = 0;}

    static ReturnStmt * ret; // verify when exiting function scope

    bool FindScope(int scope);
    void EnterScope(int scope);
    void ExitScope(Symbol * symbol);

    void AddSymbol(Symbol * sym); 
    Symbol * FindSymbol(string id);
    bool IsSymbolInScope(string id);

    int GetScope(){return scope;}

    void PrintSymbolTable();
};
 
#endif