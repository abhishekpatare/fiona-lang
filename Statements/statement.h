#include "../AstNode.h"
#ifndef STATEMENT_NODE
#define STATEMENT_NODE
class StatementNode:public AstNode{
    public:
    virtual void execute()=0;
};
#endif