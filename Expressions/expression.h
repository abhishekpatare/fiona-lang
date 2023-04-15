#include "AstNode.h"
#include "data_types.h"
#ifndef EXPRESSION_NODE
#define EXPRESSION_NODE



class ExpressionNode:AstNode{
    public:
    virtual DType* get_value()=0;
};
#endif