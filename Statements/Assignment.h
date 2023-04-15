#include "fiona_base.h"
#include "SymbolTable.h"
#include "statement.h"
#include "expression.h"

#ifndef FIONA_ASSIGNMENT_STMT
#define FIONA_ASSIGNMENT_STMT

class AssignmentNode:public StatementNode{
    identifier id;
    ExpressionNode*exp;
    public:
    AssignmentNode(identifier id , ExpressionNode *exp):id(id),exp(exp){}
    void execute();
};

#endif