#include "expression.h"
#include "../SymbolTable/SymTabEntry.h"
#include "../../Variable.h"
#ifndef INTEGEREXPRESSION_NODE
#define INTEGEREXPRESSION_NODE


class IntegerExpressionNode : public ExpressionNode<int>{
};

class Integer:public IntegerExpressionNode{

};

class IntegerLiteralNode:public Integer{
    int value;
    public:
    virtual int get_value();
};

class IntegerConstantNode:public Integer{
    const_sid id;
    public:
    int get_value();
    const_sid get_sid();
};
class IntegerVariableNode:public Integer , Variable{
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