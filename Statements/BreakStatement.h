#include "statement.h"
#include "../Expressions/ReturnObj.h"

#ifndef FI_BREAK
#define FI_BREAK

class BreakNode:public StatementNode{
    public:
    ReturnObj* execute();
};

#endif