#include "SymbolTable.h"
#include "expression.h"

#ifndef FIONA_VAR
#define FIONA_VAR

class VariableNode:public ExpressionNode{
    identifier id;
    public:
    VariableNode(identifier id):id(id){}
    DType*get_value();
};

#endif