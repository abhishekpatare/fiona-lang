#include "../Experiments/fiona_base.h"
#include "statement.h"
#include "../Expressions/expression.h"
#include "../Experiments/SymbolTable.h"
#include "BlockNode.h"
#include "../Expressions/Variables.h"
#ifndef FIONA_FUNCTIONS
#define FIONA_FUNCTIONS

//extern Scope* curr_scope;


class ParamList{
    public:
    ParamList*left;
    identifier right;
    
    ParamList(ParamList*left , identifier right):left(left),right(right){}
};

class ArgList{
    public:
    ArgList*left;
    ExpressionNode*right;
    
    ArgList(ArgList*left , ExpressionNode* right):left(left),right(right){}
};

void get_param_list(ArgList* p , vector<identifier>&params);

void get_arg_list(ArgList* p , vector<DType*>&args);
class FunctionDefinitionNode:public StatementNode {
    ArgList* parameters;
    identifier id;
    BlockNode*blk;
    public:
    FunctionDefinitionNode(ArgList* parameters, identifier id , BlockNode*blk):parameters(parameters),id(id),blk(blk){}
    ReturnObj* execute();
};

class FunctionCallNode:public ExpressionNode{
    ArgList* args;
    identifier id;
    public:
    FunctionCallNode(ArgList*args,identifier id):args(args),id(id){}                //Check BlockNode* argument
    DType* get_value();
};


class FunctionDefList{
    FunctionDefList*left;
    FunctionDefinitionNode*right;
    
};
#endif