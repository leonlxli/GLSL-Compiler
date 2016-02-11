#include "sym_table.h"

void SymbolTable::EnterScope() {
  /* empty string as special marker
  since it can't be an identifier */
  scopeStack.push(""); 
  scope++; // inc scope number 
}
    
void SymbolTable::ExitScope(){
  while(scopeStack.top()!=""){
    string key = scopeStack.top();
    scopeStack.pop();

    Symbol * symbol = table.find(key)->second.top(); // find addr
    table.find(key)->second.pop(); // pop

    free(symbol); // free
  }
  scopeStack.pop();
  scope--;

  // free memory for symbol
}

void SymbolTable::AddSymbol(Symbol * sym) {
  sym->scope = scope; // add scope to symbol

  Decl * decl = sym->decl;
  string id = decl->GetId();

  map<string,stack<Symbol *> >::iterator it = table.find(id);
  
  stack<Symbol *> bucket;

  if (it !=  table.end()) { // already in map
    bucket = it->second;

    if (bucket.top()->scope == sym->scope) {
      return;
    }
  }
  scopeStack.push(id);
  bucket.push(sym);
  table.insert(pair<string,stack<Symbol *> >(id, bucket));
}

Symbol * SymbolTable::FindSymbol(string id) {
  map<string,stack<Symbol *> >::iterator it = table.find(id);
  if(it==table.end() || it->second.size()==0){
    return NULL;
  }
  else{
    return it->second.top();
  }
}

bool SymbolTable::FindScope(Scope s){
  list<Scope>::iterator it = find(scopeList.begin(), scopeList.end(), s);
  if( it == scopeList.end()) {
    return false;
  } else {
    return true;
  }
}

bool SymbolTable::IsSymbolInScope(string id) {
  Symbol * sym = SymbolTable::FindSymbol(id);
  if(sym==NULL){
    return true;
  }
  if(sym->scope != scope){
    return true;
  }
  else{
    return false;
  }


}