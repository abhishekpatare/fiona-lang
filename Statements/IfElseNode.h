#include "statement.h"
#include "../Statements/BlockNode.h"
#include "../Expressions/Boolean/BooleanExpression.h"
#ifndef IFELSE_NODE
#define IFELSE_NODE
class IfElseNode:public StatementNode{
    BooleanExpression* cond;
    BlockNode *blk1,*blk2;
    public:
    void execute();
};
#endif