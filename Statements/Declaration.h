#include "statement.h"
#include "../Variable.h"
#ifndef DECLARATION_NODE
#define DECLARATION_NODE

class IntegerDeclaration:public StatementNode, Variable{
    identifier name;
    int value;
    public:
    IntegerDeclaration(identifier name, int value);
    void execute();
};

class BooleanDeclaration:public StatementNode, Variable{
    identifier name;
    bool value;
    public:
    BooleanDeclaration(identifier name, bool value);
    void execute();
};
#endif