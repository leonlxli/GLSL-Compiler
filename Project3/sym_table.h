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

static stack<int> sym_table; // TODO - change int to scope maps

typedef struct Variable { 
  int scope;

  int type; // type
  int line; // line of declaration 

  int int_val; // value of variable
  float float_val;
  bool bool_val;

  List<int> * references; // variable ref lines - not sure if needed
} Variable;

class SymbolTable {
  protected:
    stack<string> scopeStack;
    map<string, stack<Variable> > table;
     
  public:
    SymbolTable(){};
    void OpenScope();
    void CloseScope();
    void AddVariable(string id, Variable var);
};
 
#endif