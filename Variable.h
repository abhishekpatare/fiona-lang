#include "./SymbolTable/SymTabEntry.h"

#ifndef VARIABLE_NODE
#define VARIABLE_NODE

class Variable{
    public:
    virtual sid get_sid()=0;
};

#endif