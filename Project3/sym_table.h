#ifndef _H_sym_table
#define _H_sym_table

#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"
#include "location.h"
#include "list.h"

#include <map>
#include <stack>
#include <string> 

static std::stack<int> sym_table; // TODO - change int to scope maps

typedef struct Variable { 
  char id[MaxIdentLen]; // identifier
  int type; // type
  int line; // line of declaration 

  int int_val; // value of variable
  float float_val;
  bool bool_val;

  List<int> * references; // variable ref lines - not sure if needed
} Variable;

class Scope {
  protected:
  	std::map<std::string, Variable> scopeMap;

  public:
     Scope(){};
     static void MergeScopes(Scope s1, Scope s2);
     std::map<std::string, Variable> * getMap() {
     	return &scopeMap;
     };
};

class SymbolTable {
  protected:
     std::stack<Scope> symTable; // TODO - change int to scope maps
     
  public:
     SymbolTable(){};
     void PushScope(Scope s);
     void PopScope();
     std::stack<Scope> * getStack() {
     	return &symTable;
     }
};
 
#endif