#include "expression.h"

class IntegerLiteralNode:public ExpressionNode{

};

class IntegerConstantNode:public ExpressionNode{

};
class IntegerVariableNode:public ExpressionNode{

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