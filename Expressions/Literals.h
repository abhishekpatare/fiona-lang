#include "expression.h"
#include "../Experiments/SymbolTable.h"

#ifndef FIONA_LITERALS
#define FIONA_LITERALS

//extern Scope* curr_scope;

class Literal:public ExpressionNode{
    DType* dt;
    public:
    Literal(){}
    Literal(DType* dt):dt(dt){}
    DType* get_value();
};

class IntegerLiteral:public Literal{
    public:
    IntegerLiteral(int val);
    // DType* get_value();
};
class FloatLiteral:public Literal{
    public:
    FloatLiteral(float val);
    // DType* get_value();
};
class BoolLiteral:public Literal{
    public:
    BoolLiteral(bool val);
    // DType* get_value();
};

#endif