#include "../expression.h"
#ifndef BOOLEANEXPRESSION_NODE
#define BOOLEANEXPRESSION_NODE

class BooleanExpression:public ExpressionNode{
    public:
    virtual bool get_value()=0;
};

class BooleanLiteralNode:public ExpressionNode{

};

class BooleanConstantNode:public ExpressionNode{

};
class BooleanVariableNode:public ExpressionNode{

};

class BooleanOrNode:public ExpressionNode{

};

class BooleanAndNode:public ExpressionNode{

};

class BooleanXorNode:public ExpressionNode{

};

class BooleanNotNode:public ExpressionNode{

};

#endif