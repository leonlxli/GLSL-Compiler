#include "sym_table.h"

void SymbolTable::OpenScope() {
  /* empty string as special marker
  since it can't be an identifier */
  scopeStack.push("");  
}
    
void SymbolTable::CloseScope(){
  // pop from scopeStack until special marker
  // and remove the first value in the bucket for each 
  // key popped from scopeStack
}

void SymbolTable::AddVariable(string id, Variable var) {

  map<string,stack<Variable> >::iterator it = table.find(id);

  stack<Variable> bucket;

  if (it !=  table.end()) { // already in map
    stack<Variable> bucket = it->second;

    if (bucket.top().scope == var.scope) {
      // ReportError::DeclConflict(Decl *newDecl, Decl *prevDecl);
    }
  }

  bucket.push(var);
  table.insert(pair<string,stack<Variable> >(id, bucket));
}