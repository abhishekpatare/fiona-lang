#include "statement.h"
#include "StatementList.h"
#include "../Experiments/fiona_base.h"
#include "../Experiments/SymbolTable.h"
#include "../Expressions/ReturnObj.h"


#ifndef BLOCK_NODE
#define BLOCK_NODE

//extern Scope* curr_scope;

class BlockNode:public StatementNode{
    StatementList* s_list;

    public:
    BlockNode(StatementList* s_list);
    ReturnObj* execute();
};
#endif