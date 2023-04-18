#include "statement.h"
#include "fiona_base.h"


#ifndef STATEMENTLIST_NODE
#define STATEMENTLIST_NODE

class StatementList:public StatementNode{
    StatementList* left;
    StatementNode* right;

    public:
    StatementList(StatementList* left, StatementNode* right);
    void execute();
};

#endif