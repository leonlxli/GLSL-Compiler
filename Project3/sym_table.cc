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

void SymbolTable::AddSymbol(Symbol * sym) {
  Decl * decl = sym->decl;
  string id = decl->GetId();

  map<string,stack<Symbol *> >::iterator it = table.find(id);

  stack<Symbol *> bucket;

  if (it !=  table.end()) { // already in map
    bucket = it->second;

    if (bucket.top()->scope == sym->scope) {
      ReportError::DeclConflict(decl, bucket.top()->decl);
    }
  }

  bucket.push(sym);
  table.insert(pair<string,stack<Symbol *> >(id, bucket));
}