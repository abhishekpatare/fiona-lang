#include "expression.h"
#include "../SymbolTable/SymTabEntry.h"
#ifndef INTEGEREXPRESSION_NODE
#define INTEGEREXPRESSION_NODE

class IntegerExpressionNode : public ExpressionNode<int>{
};

class IntegerLiteralNode:public IntegerExpressionNode{
    int value;
    public:
    virtual int get_value();
};

class IntegerConstantNode:public IntegerExpressionNode{
    const_sid id;
    public:
    int get_value();
    const_sid get_sid();
};
class IntegerVariableNode:public IntegerExpressionNode , Variable{
    sid id;
    public:
    int get_value();
    sid get_sid();
};

class IntegerArithmeticNode:public IntegerExpressionNode{
    protected:
    IntegerExpressionNode *left , *right;
};
class IntegerAdditionNode:public IntegerArithmeticNode{
    public:
    int get_value();
};
class IntegerSubtractionNode:public IntegerArithmeticNode{
    public:
    int get_value();
};
class IntegerMultiplicationNode:public IntegerArithmeticNode{
    public:
    int get_value();
};
class IntegerDivisionionNode:public IntegerArithmeticNode{
    public:
    int get_value();
};

#endif