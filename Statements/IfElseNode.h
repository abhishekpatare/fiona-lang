#include "statement.h"
#include "BlockNode.h"
#include "expression.h"
#ifndef IFELSE_NODE
#define IFELSE_NODE
class IfElseNode:public StatementNode{
    ExpressionNode * cond;
    BlockNode *blk1,*blk2;
    public:
    IfElseNode(ExpressionNode*cond,BlockNode*blk1,BlockNode*blk2);
    void execute();

};
#endif