#include "expression.h"
#include "../Experiments/fiona_base.h"

#ifndef FIONA_BINOPS
#define FIONA_BINOPS

class BinOpNode:public ExpressionNode{
    protected:
    ExpressionNode*left;
    ExpressionNode*right;
    public:
    virtual DType* get_value(){};
    BinOpNode(ExpressionNode*left , ExpressionNode*right):left(left),right(right){}
};
class AdditionNode:public BinOpNode{
    public:
    DType*get_value();
    AdditionNode(ExpressionNode*left , ExpressionNode*right):BinOpNode(left,right){}

};
class SubtractionNode:public BinOpNode{
    public:
    DType*get_value();
    SubtractionNode(ExpressionNode*left , ExpressionNode*right):BinOpNode(left,right){}

};
class MultiplicationNode:public BinOpNode{
    public:
    DType*get_value();
    MultiplicationNode(ExpressionNode*left , ExpressionNode*right):BinOpNode(left,right){}
};
class DivisionNode:public BinOpNode{
    public:
    DType*get_value();
    DivisionNode(ExpressionNode*left , ExpressionNode*right):BinOpNode(left,right){}

};
class AndNode:public BinOpNode{
    public:
    DType*get_value();
    AndNode(ExpressionNode*left , ExpressionNode*right):BinOpNode(left,right){}

};
class OrNode:public BinOpNode{
    public:
    DType*get_value();
    OrNode(ExpressionNode*left , ExpressionNode*right):BinOpNode(left,right){}

};
class XorNode:public BinOpNode{
    public:
    DType*get_value();
    XorNode(ExpressionNode*left , ExpressionNode*right):BinOpNode(left,right){}

};
class SC_And_Node:public BinOpNode{
    public:
    DType*get_value();
    SC_And_Node(ExpressionNode*left , ExpressionNode*right):BinOpNode(left,right){}

};
class SC_Or_Node:public BinOpNode{
    public:
    DType*get_value();
};
class GTNode:public BinOpNode{
    public:
    DType*get_value();
    GTNode(ExpressionNode*left , ExpressionNode*right):BinOpNode(left,right){}

};
class GENode:public BinOpNode{
    public:
    DType*get_value();
    GENode(ExpressionNode*left , ExpressionNode*right):BinOpNode(left,right){}

};
class LTNode:public BinOpNode{
    public:
    DType*get_value();
    LTNode(ExpressionNode*left , ExpressionNode*right):BinOpNode(left,right){}

};
class LENode:public BinOpNode{
    public:
    DType*get_value();
    LENode(ExpressionNode*left , ExpressionNode*right):BinOpNode(left,right){}

};
class EQNode:public BinOpNode{
    public:
    DType*get_value();
    EQNode(ExpressionNode*left , ExpressionNode*right):BinOpNode(left,right){}


};
class NEQNode:public BinOpNode{
    public:
    DType*get_value();
    NEQNode(ExpressionNode*left , ExpressionNode*right):BinOpNode(left,right){}
};
#endif