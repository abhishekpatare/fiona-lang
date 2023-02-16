#include "../expression.h"
#ifndef BOOLEANEXPRESSION_NODE
#define BOOLEANEXPRESSION_NODE

class BooleanExpression:public ExpressionNode<bool>{
    
};

class BooleanLiteralNode:public BooleanExpression{
    bool value;
    public:
    bool get_value();
};

class BooleanConstantNode:public BooleanExpression{
    const sid id;
    public:
    bool get_value();
};
class BooleanVariableNode:public BooleanExpression{
    bool value;
    sid id;
    public:
    sid get_sid();
    bool get_value();
};

class BooleanOperationNode:public BooleanExpression{
    protected:
    BooleanExpression *left, *right;
};

class BooleanOrNode:public BooleanOperationNode{

    public:
    // BooleanExpression *left, *right;
    bool get_value();
};

class BooleanAndNode:public BooleanOperationNode{
    public:
    // BooleanExpression *left, *right;
    bool get_value();
};

class BooleanXorNode:public BooleanOperationNode{
    public:
    // BooleanExpression *left, *right;
    bool get_value();
};

class BooleanNotNode:public BooleanExpression{
    bool value;
    public:
    // BooleanExpression *left, *right;
    bool get_value();
};

#endif