// #include "../AstNode.h"

#include "../Expressions/ReturnObj.h"
#ifndef STATEMENT_NODE
#define STATEMENT_NODE
class StatementNode{
    public:
    virtual ReturnObj* execute()=0;
};
#endif