#include "../Expressions/expression.h"
#include "statement.h"
#include "../Experiments/data_types.h"
#include "../Experiments/fiona_base.h"
#include "../Experiments/SymbolTable.h"
#include "../Expressions/ReturnObj.h"
#ifndef DECLARATION_NODE
#define DECLARATION_NODE


//extern Scope* curr_scope;


class DeclarationNode:public StatementNode{
    D_TYPE type;
    identifier id;
    ExpressionNode* exp;
    public:
    DeclarationNode(identifier id , ExpressionNode* exp);
    ReturnObj* execute() ;

};
#endif