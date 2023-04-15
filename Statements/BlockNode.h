#include "statement.h"
#include "fiona_base.h"

#ifndef BLOCK_NODE
#define BLOCK_NODE
class BlockNode:StatementNode{
    StatementNode *st1,*st2;

    public:
    BlockNode(StatementNode*st1,StatementNode*st2);
    void execute();
};
#endif