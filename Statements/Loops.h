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
        void execute();
};
class WhileNode:public StatementNode{
    BooleanExpression *cond;
    BlockNode *blk;

    public:
    void execute();
};
class ForNode:public StatementNode{
    Variable *i;
    Integer *l, *r;
    BlockNode *blk;

    public:
    void execute();
};

#endif
