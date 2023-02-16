#include "../expression.h"
#ifndef BOOLEANEXPRESSION_NODE
#define BOOLEANEXPRESSION_NODE

class BooleanExpression:public ExpressionNode<bool>{
    public:
    virtual bool get_value()=0;
};

class BooleanLiteralNode:public BooleanExpression{
    bool value;
    public:
    bool get_value();
    BooleanLiteralNode(bool value);
};

class BooleanConstantNode:public BooleanExpression{
    const sid id;
    public:
    bool get_value();
    BooleanConstantNode(bool value);
};
class BooleanVariableNode:public BooleanExpression{
    bool value;
    sid id;
    public:
    sid get_sid();
    bool get_value();
    BooleanVariableNode(bool value, sid *id);
};

class BooleanOperationNode:public BooleanExpression{
    protected:
    BooleanExpression *left, *right;
    public:
    BooleanOperationNode(BooleanExpression *left, BooleanExpression *right);
};

class BooleanOrNode:public BooleanOperationNode{

    public:
    // BooleanExpression *left, *right;
    bool get_value();
    BooleanOrNode(BooleanExpression *left, BooleanExpression *right);       //Need to check the calling of the Base Class Constructor
};

class BooleanAndNode:public BooleanOperationNode{
    public:
    // BooleanExpression *left, *right;
    bool get_value();
    BooleanAndNode(BooleanExpression *left, BooleanExpression *right);
};

class BooleanXorNode:public BooleanOperationNode{
    public:
    // BooleanExpression *left, *right;
    bool get_value();
    BooleanXorNode(BooleanExpression *left, BooleanExpression *right);
};

class BooleanNotNode:public BooleanExpression{
    bool value;
    public:
    // BooleanExpression *left, *right;
    bool get_value();
    BooleanNotNode(bool value);
};

#endif