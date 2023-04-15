#include "fiona_base.h"
#include "data_types.h"

#ifndef FIONA_SCOPE_SYMTAB
#define FIONA_SCOPE_SYMTAB

class SymbolNotDefined:public exception,Object{
    const char* symbol_name;
    public:

    SymbolNotDefined(const char* symbol_name);
    const char* what();
    string toString();
};

class SymbolTableEntry{
    identifier name;
    DType* val;
    bool isDefined;
    bool isConstant;

    public:
    SymbolTableEntry(identifier name):name(name){
        val = nullptr;
        isDefined = false;
        isConstant = false;
    }
    SymbolTableEntry(identifier name,DType* val, bool b , bool c);
    DType* get();
    void set(DType* val);
};


class Scope{
    Scope* parent;
    SymbolTable* sym_tab;

    public:
    Scope(Scope* parent);
    // ~Scope();
    void PushSymTab();
    void PopSymTab();
};

class SymbolTable{
    unordered_map<identifier, SymbolTableEntry*> table;
    

    public:
    SymbolTable* parent;
    SymbolTable(SymbolTable* parent);
    // ~SymbolTable();
    DType* resolve(identifier id);
    void create(identifier id);
    void insert(identifier id, DType* dt);

};

#endif