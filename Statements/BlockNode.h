#include "statement.h"
#include <vector>
#ifndef BLOCK_NODE
#define BLOCK_NODE
class BlockNode:StatementNode{
    std::vector<StatementNode*> statements;

    public:
    void execute();
};
#endif