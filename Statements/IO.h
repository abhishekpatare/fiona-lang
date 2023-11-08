#include "statement.h"
#include "Functions.h"
#include "../Expressions/expression.h"
#include <vector>
#ifndef IO_NODE
#define IO_NODE

class PrintNode:public StatementNode{
    ArgList* arg;
    public:
    PrintNode(ArgList* arg):arg(arg){};
    ReturnObj* execute();
};

#endif