#include "statement.h"
#include "BlockNode.h"
#include "../Expressions/expression.h"
#include "../Experiments/SymbolTable.h"
#include "../Expressions/ReturnObj.h"
#ifndef IFELSE_NODE
#define IFELSE_NODE

//extern Scope* curr_scope;

class IfElseNode:public StatementNode{
    ExpressionNode * cond;
    BlockNode *blk1,*blk2;
    public:
    IfElseNode(ExpressionNode*cond,BlockNode*blk1,BlockNode*blk2);
    ReturnObj* execute();

};
#endif