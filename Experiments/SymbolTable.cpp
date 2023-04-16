#include "SymbolTable.h"


SymbolNotDefined::SymbolNotDefined(const char* symbol_name){
    this->symbol_name = symbol_name;
}
const char* SymbolNotDefined::what(){
    return ("symbol "+string(symbol_name)+" not defined").c_str();
}

SymbolTableEntry::SymbolTableEntry(identifier name,DType* val, bool b , bool c):name(name),val(val),isDefined(b),isConstant(c){}
DType* SymbolTableEntry::get(){
    if(!isDefined)throw SymbolNotDefined(name.c_str());
    return this->val;
}
void SymbolTableEntry::set(DType* val){
    this->val = val;
}

void pushScope(){
    curr_scope = new Scope(curr_scope);
}

void popScope(){
    curr_scope = curr_scope->parent;
}

Scope::Scope(Scope* parent){
    this->parent = parent;
    this->sym_tab = new SymbolTable(nullptr);
}

void Scope::PushSymTab(){
        this->sym_tab = new SymbolTable(this->sym_tab);
}
void Scope::PopSymTab(){
    
    this->sym_tab = this->sym_tab->parent;

}

SymbolTable::SymbolTable(SymbolTable* parent):parent(parent){}

DType* SymbolTable::resolve(identifier id){
    
    if(table.find(id)==table.end())return this->parent->resolve(id);
    return table[id]->get();
}
void SymbolTable::create(identifier id){
    this->table[id] = new SymbolTableEntry(id);
}
void SymbolTable::insert(identifier id, DType* dt){
    if(table[id] == nullptr){
        this->create(id);
    }
    this->table[id]->set(dt);
}

void SymbolTable::insert_func(identifier id ,vector<identifier>params , BlockNode*blk){
    func_table[id] = new FunctionEntry(params,blk);
}
