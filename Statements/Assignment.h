#include "../Experiments/fiona_base.h"
#include "../Experiments/SymbolTable.h"
#include "statement.h"
#include "../Experiments/data_types.h"
#include "../Expressions/expression.h"

#ifndef FIONA_ASSIGNMENT_STMT
#define FIONA_ASSIGNMENT_STMT

//extern Scope* curr_scope;

class AssignmentNode:public StatementNode{
    identifier id;
    ExpressionNode*exp;
    public:
    AssignmentNode(identifier id , ExpressionNode *exp):id(id),exp(exp){}
    ReturnObj* execute();
};

#endif