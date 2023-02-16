#include "../AstNode.h"
#ifndef EXPRESSION_NODE
#define EXPRESSION_NODE


template <typename T>
class ExpressionNode:AstNode{
    public:
    virtual T get_value()=0;
};
#endif