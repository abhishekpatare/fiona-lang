#include "../Experiments/SymbolTable.h"
#include "expression.h"
#include "../Experiments/fiona_base.h"

#ifndef FIONA_VAR
#define FIONA_VAR

//extern Scope* curr_scope;

class VariableNode:public ExpressionNode{
    public:
    identifier id;
    VariableNode(identifier id):id(id){}
    DType*get_value();
};

#endif