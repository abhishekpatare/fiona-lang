#include "./SymbolTable/SymTab.h"

#ifndef VARIABLE_NODE
#define VARIABLE_NODE

class Variable{
    protected:
    sid id;
    public:
    virtual sid get_sid()=0;
};

#endif