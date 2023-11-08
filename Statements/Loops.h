#include "statement.h"
#include "BlockNode.h"
#include "../Expressions/expression.h"
#include "../Experiments/SymbolTable.h"
#ifndef LOOP_NODE
#define LOOP_NODE


// //extern Scope* curr_scope;

class LoopNode:public StatementNode{
    BlockNode *blk;
    public:
    LoopNode(BlockNode *blk);
    ReturnObj* execute();
};
class WhileNode:public StatementNode{
    ExpressionNode *cond;
    BlockNode *blk;

    public:
    WhileNode(ExpressionNode *cond,BlockNode *blk);
    ReturnObj* execute();
};
class ForNode:public StatementNode{
    ExpressionNode *l,*r,*step;
    BlockNode *blk;
    identifier loopvar;
    public:
    ForNode(identifier loopvar, ExpressionNode*l,ExpressionNode*r,ExpressionNode*step,BlockNode*blk);
    ReturnObj* execute();
};

#endif
