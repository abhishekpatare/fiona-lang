#include "statement.h"
#include "../Variable.h"
#ifndef DECLARATION_NODE
#define DECLARATION_NODE

class Declaration:public StatementNode, Variable{

};
#endif