#include "sym_table.h"

void SymbolTable::EnterScope(int scopeType) {
  /* empty string as special marker
  since it can't be an identifier */
  scopeList.push_back(scopeType);
  scopeStack.push(""); 
  scope++; // inc scope number 
}
    
void SymbolTable::ExitScope(Symbol * symbol){ // symbol = NULL unless exiting from a function
  while(scopeStack.top()!= string("")){

    string key = scopeStack.top();
    scopeStack.pop();

    stack<Symbol *> value = table[key];
    Symbol * symbol = value.top(); // find addr
    value.pop(); // pop

    table[key] = value; //update entry

    //free(symbol); // free

    if (value.empty()) {
      table.erase(key); // remove symbol from table
    }
  }

  if (scopeList.back() == Scope::function) {
    // verify presence of return statement if needed
    FnDecl * fun = (FnDecl *) symbol->decl;

    // TODO
  }

  scopeList.pop_back();
  scopeStack.pop();
  scope--;
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
  table[id] = bucket; // add updated values

  //PrintSymbolTable();
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

bool SymbolTable::FindScope(int scope){
  list<int>::iterator it = find(scopeList.begin(), scopeList.end(), scope);
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

void SymbolTable::PrintSymbolTable() {
  cout << "================ MAP ==============" <<endl;
  typedef map<string, stack<Symbol *> >::const_iterator MapIterator;
  for (MapIterator iter = table.begin(); iter != table.end(); iter++)
  {
      cout << "Key: " << iter->first << endl /*<< "Values:" << endl*/;

      /*typedef stack<Symbol *>::const_iterator StackIterator;
      for (StackIterator stack_iter = iter->second.begin(); stack_iter != iter->second.end(); stack_iter++)
          cout << " " << *stack_iter << endl;*/
  }
}

