#include "statement.h"
#include "../Experiments/fiona_base.h"
#include "../Expressions/ReturnObj.h"


#ifndef STATEMENTLIST_NODE
#define STATEMENTLIST_NODE

class StatementList:public StatementNode{
    StatementList* left;
    StatementNode* right;

    public:
    StatementList(StatementList* left, StatementNode* right);
    ReturnObj* execute();
};
// typedef StatementList* st_list;

#endif