#include "./SymbolTable/SymTab.h"

#ifndef VARIABLE_NODE
#define VARIABLE_NODE

class Variable{
    protected:
    sid id;
    identifier name;
    public:
    Variable(identifier name);
    virtual identifier get_id()=0;
    virtual sid get_sid()=0;

};

#endif