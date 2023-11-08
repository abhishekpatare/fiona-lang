#include "statement.h"
#include "Functions.h"
#include "../Expressions/ReturnObj.h"

#ifndef EXP_STAT
#define EXP_STAT


class ExpWrapper:public StatementNode{
    ArgList* exp;
    public:
    ExpWrapper(ArgList* exp):exp(exp){};
    ReturnObj* execute(){return new ReturnObj(nullptr,false,false);};
};

#endif