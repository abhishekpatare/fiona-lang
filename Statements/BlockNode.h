#include "statement.h"
#include "StatementList.h"
#include "fiona_base.h"

#ifndef BLOCK_NODE
#define BLOCK_NODE
class BlockNode:StatementNode{
    StatementList* s_list;

    public:
    BlockNode(StatementList* s_list);
    void execute();
};
#endif