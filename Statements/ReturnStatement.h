#include "statement.h"
#include "../Expressions/expression.h"
#include "../Expressions/ReturnObj.h"
#ifndef FI_RET
#define FI_RET

class ReturnNode:public StatementNode{
    ExpressionNode* exp;
    public:
    ReturnNode(ExpressionNode* exp):exp(exp){};
    ReturnObj* execute();
};

#endif