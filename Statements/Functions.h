#include "fiona_base.h"
#include "statement.h"
#include "expression.h"
#include "SymbolTable.h"
#include "BlockNode.h"
#ifndef FIONA_FUNCTIONS
#define FIONA_FUNCTIONS

extern Scope* curr_scope;


class ParamList:AstNode{
    public:
    ParamList*left;
    identifier right;
    
    ParamList(ParamList*left , identifier right):left(left),right(right){}
};

class ArgList:AstNode{
    public:
    ArgList*left;
    ExpressionNode*right;
    
    ArgList(ArgList*left , ExpressionNode* right):left(left),right(right){}
};

void get_param_list(ParamList* p , vector<identifier>&params);

void get_arg_list(ArgList* p , vector<DType*>&args);
class FunctionDefinitionNode:public StatementNode {
    ParamList* parameters;
    identifier id;
    BlockNode*blk;
    public:
    FunctionDefinitionNode(ParamList* parameters, identifier id , BlockNode*blk):parameters(parameters),id(id),blk(blk){}
    void execute();
};

class FunctionCallNode:public StatementNode{
    ArgList* args;
    identifier id;
    public:
    FunctionCallNode(ArgList*args,identifier id , BlockNode*blk):args(args),id(id){}
    void execute();
};
#endif