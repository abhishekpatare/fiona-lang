#include "../Experiments/data_types.h"
#include "expression.h"

#ifndef FIONA_RETURN_OBJ
#define FIONA_RETURN_OBJ


class ReturnObj:public ExpressionNode{
    public:
    DType* val;
    bool is_break;
    bool is_return;
    ReturnObj(DType* val , bool is_break ,bool  is_return):val(val),is_break(is_break),is_return(is_return){};
    DType* get_value();
};

#endif