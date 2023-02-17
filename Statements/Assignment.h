#include "statement.h"
#include "../Variable.h"
#include <vector>
#include "../Expressions/Boolean/BooleanExpression.h"
#include "../Expressions/Integer/IntegerExpression.h"
#include "SymTab.h"
#ifndef ASSIGNMENT_NODE
#define ASSIGNMENT_NODE

extern SymTab *symbolTable;

class AssignmentIntegerNode:public StatementNode, Variable{
    Variable *left;
    IntegerExpressionNode *right;
    public:
    AssignmentIntegerNode(Variable *left, IntegerExpressionNode *right);
    void execute();

};

class AssignmentBooleanNode:public StatementNode, Variable{
    Variable *left;
    BooleanExpression *right;
    public:
    AssignmentBooleanNode(Variable *left, BooleanExpression *right);
    void execute();
};
#endif