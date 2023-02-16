#include "statement.h"
#include "BlockNode.h"
#include "../Expressions/Boolean/BooleanExpression.h"
#ifndef LOOP_NODE
#define LOOP_NODE

class LoopNode:public StatementNode{
    BlockNode *blk;
    public:
        void execute();
};
class WhileNode:public StatementNode{
    BooleanExpression *cond;
    BlockNode *blk;
    void exceute();
};
class ForNode:public StatementNode{

};

#endif
