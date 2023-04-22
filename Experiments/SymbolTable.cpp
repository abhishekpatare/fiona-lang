#include "SymbolTable.h"


// SymbolNotDefined::SymbolNotDefined(const char* symbol_name){
//     this->symbol_name = symbol_name;
// }
// const char* SymbolNotDefined::what(){
//     return ("symbol "+string(symbol_name)+" not defined").c_str();
// }

// SymbolTableEntry::SymbolTableEntry(identifier name,DType* val, bool b , bool c):name(name),val(val),isDefined(b),isConstant(c){}
// DType* SymbolTableEntry::get(){
//     // if(!isDefined)throw SymbolNotDefined(name.c_str());
//     return this->val;
// }
// void SymbolTableEntry::set(DType* val){
//     this->val = val;
// }


Scope* curr_scope = new Scope(nullptr);

unordered_map<identifier, FunctionEntry*>func_table; 

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

DType* SymbolTableEntry::get(){
    return this->val;
}


void SymbolTableEntry::set(DType* value){
    this->val=value;
}


SymbolTable::SymbolTable(SymbolTable* parent):parent(parent){}

DType* SymbolTable::resolve(identifier id){

    if(table.find(id)==table.end())return this->parent->resolve(id);
    return table[id]->get();
}
void SymbolTable::create(identifier id){
    this->table[id] = new SymbolTableEntry(id);
}
void SymbolTable::insert_byref(identifier id, DType* dt){
    if(table[id] == nullptr){
        this->create(id);
    }
    this->table[id]->set(dt);
}

void SymbolTable::insert_byval(identifier id, DType* dt){
    if(table.find(id)!=table.end()){
        if(table[id] == nullptr) this->create(id);
        this->table[id]->set(dt->clone());
    }
    else if(parent!=nullptr) parent->update_byval(id, dt);
    // cout << "DT: " << dt->getIntValue() << " " << dt->clone()->getIntValue();
}

void SymbolTable::update_byref(identifier id, DType* dt){
    this->table[id]->set(dt);
}

void SymbolTable::update_byval(identifier id, DType* dt){
    this->table[id]->set(dt->clone());
}

void SymbolTable::insert_func(identifier id ,vector<identifier>params , BlockNode*blk){
    cout << params.size();
    FunctionEntry* ent=new FunctionEntry(params, blk);
    func_table[id] = ent;
}

FunctionEntry* SymbolTable::resolve_func(identifier id){
    if(func_table.find(id)==func_table.end()){
        return this->parent->resolve_func(id);
    }
    return func_table[id];
}