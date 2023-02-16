#include "expression.h"
#ifndef INTEGEREXPRESSION_NODE
#define INTEGEREXPRESSION_NODE


class IntegerExpression:public ExpressionNode{
    public:
    virtual int get_value()=0;
};


class IntegerLiteralNode:public ExpressionNode{
    
};

class IntegerConstantNode:public ExpressionNode{
    int value;

};

class IntegerVariableNode:public ExpressionNode{
    int sid;

};

class IntegerArithmeticNode:public ExpressionNode{
    

};

class IntegerAdditionNode:public IntegerArithmeticNode{

};

class IntegerSubtracttionNode:public IntegerArithmeticNode{

};

class IntegerMultiplicationNode:public IntegerArithmeticNode{

};

class IntegerDivisionionNode:public IntegerArithmeticNode{

};

#endif