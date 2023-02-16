#include "BooleanExpression.h"
#include "../expression.h"

class BooleanExpression:public ExpressionNode{
    public:
    virtual bool get_value()=0;
};