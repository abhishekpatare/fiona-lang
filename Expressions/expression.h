// #include "../AstNode.h"
#include "../Experiments/data_types.h"
#ifndef EXPRESSION_NODE
#define EXPRESSION_NODE



class ExpressionNode{
    public:
    virtual DType* get_value()=0;
};
#endif