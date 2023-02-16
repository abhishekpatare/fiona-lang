#include "statement.h"
#include "../Expressions/expression.h"
#include "../SymbolTable/SymTabEntry.h"
#include <vector>
#ifndef IO_NODE
#define IO_NODE

template<typename T>
class PrintNode:public StatementNode{
    ExpressionNode<T>*exp;
    public:
    PrintNode<T>(ExpressionNode<T>*exp);
    void execute();
};
class ScanNode:public StatementNode{
    sid id;
    public:
    ScanNode(sid id);
    void execute();
};

#endif