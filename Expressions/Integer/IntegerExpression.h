#include "expression.h"
#include "../SymbolTable/SymTab.h"
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
    IntegerLiteralNode(int value);
    int get_value();
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

#endif