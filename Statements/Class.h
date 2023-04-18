#include "statement.h"
#include "fiona_base.h"
#include "SymbolTable.h"
#include "Functions.h"

#ifndef FIONA_CLASSES
#define FIONA_CLASSES

class ClassDefinition:public StatementNode{
    identifier class_name;
    SymbolTable* common_table;
    vector<identifier>vars;
    FunctionDefList* class_funcs;
};

class ObjectCreationNode:public StatementNode{
    identifier obj_class_name;
    ArgList* args;
};

class classObject:public Object{
    identifier class_name;
    SymbolTable* tab;   
};

#endif