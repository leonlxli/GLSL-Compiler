#include "sym_table.h"

/* move s2 elements into s2 */
void Scope::MergeScopes(Scope s1, Scope s2) {
  std::map<std::string, Variable> * m1 = s1.getMap();
  std::map<std::string, Variable> * m2 = s2.getMap();
  
  m1->insert(m2->begin(), m2->end());
}

void SymbolTable::PushScope(Scope s) {

  /* copy parent variables into new scope, so we
  don't have to verify variables across mutiple
  stack levels */
   
  if(!symTable.empty()) {
    Scope parent = symTable.top();
    Scope::MergeScopes(s, parent);
  }

  symTable.push(s);
}

void SymbolTable::PopScope() {
  symTable.pop();
}