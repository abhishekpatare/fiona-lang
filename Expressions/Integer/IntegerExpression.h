#include "expression.h"

#ifndef INTEGEREXPRESSION_NODE
#define INTEGEREXPRESSION_NODE


class IntegerExpressionNode : public ExpressionNode<int>{
};

class Integer:public IntegerExpressionNode{
};

class IntegerLiteralNode:public Integer{
    int value;
    public:
    IntegerLiteralNode(int value);
    int get_value();
};

class IntegerConstantNode:public Integer{
    
    public:
    int get_value();
};
class IntegerVariableNode:public Integer{

    public:
    int get_value();
};

class IntegerArithmeticNode:public IntegerExpressionNode{
    protected:
    IntegerExpressionNode *left , *right;
    IntegerArithmeticNode(IntegerExpressionNode *left,IntegerExpressionNode *right);
};
class IntegerAdditionNode:public IntegerArithmeticNode{
    public:
    IntegerAdditionNode(IntegerExpressionNode *left,IntegerExpressionNode *right);
    int get_value();
};
class IntegerSubtractionNode:public IntegerArithmeticNode{
    public:
    IntegerSubtractionNode(IntegerExpressionNode *left,IntegerExpressionNode *right);
    int get_value();

};
class IntegerMultiplicationNode:public IntegerArithmeticNode{
    public:
    IntegerMultiplicationNode(IntegerExpressionNode *left,IntegerExpressionNode *right);
    int get_value();
};
class IntegerDivisionionNode:public IntegerArithmeticNode{
    public:
    IntegerDivisionionNode(IntegerExpressionNode *left,IntegerExpressionNode *right);
    int get_value();
};

class DivideByZeroError : public exception{
    public:
    string what();
};

#endif