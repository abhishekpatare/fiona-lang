#include "statement.h"
#include "BlockNode.h"
#include "expression.h"
#include "SymbolTable.h"
#ifndef LOOP_NODE
#define LOOP_NODE

class LoopNode:public StatementNode{
    BlockNode *blk;
    public:
    LoopNode(BlockNode *blk);
    void execute();
};
class WhileNode:public StatementNode{
    ExpressionNode *cond;
    BlockNode *blk;

    public:
    WhileNode(ExpressionNode *cond,BlockNode *blk);
    void execute();
};
class ForNode:public StatementNode{
    ExpressionNode *l,*r,*step;
    BlockNode *blk;
    identifier loopvar;
    public:
    ForNode(identifier loopvar, ExpressionNode*l,ExpressionNode*r,ExpressionNode*step,BlockNode*blk);
    void execute();
};

#endif
