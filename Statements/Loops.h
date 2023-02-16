#include "statement.h"
#include "BlockNode.h"
#include "../Expressions/Boolean/BooleanExpression.h"
#include "../Variable.h"
#include "../Expressions/Integer/IntegerExpression.h"
#ifndef LOOP_NODE
#define LOOP_NODE

class LoopNode:public StatementNode{
    BlockNode *blk;
    public:
    LoopNode(BlockNode *blk);
    void execute();
};
class WhileNode:public StatementNode{
    BooleanExpression *cond;
    BlockNode *blk;

    public:
    WhileNode(BooleanExpression *cond,BlockNode *blk);
    void execute();
};
class ForNode:public StatementNode{
    sid id;
    Integer *l, *r;
    BlockNode *blk;

    public:
    ForNode(sid id , Integer*l,Integer*r);
    void execute();
};

#endif
