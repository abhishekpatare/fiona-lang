#include "expression.h"
#include "statement.h"
#include "data_types.h"
#include "fiona_base.h"

#include "SymbolTable.h"
#ifndef DECLARATION_NODE
#define DECLARATION_NODE



class DeclarationNode:public StatementNode{
    D_TYPE type;
    identifier id;
    ExpressionNode* exp;
    public:
    DeclarationNode(identifier id , ExpressionNode* exp);
    void execute() ;

};
#endif