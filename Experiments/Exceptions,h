#include "./fiona_base.h"
#ifndef FIONA_EXCEPTIONS
#define FIONA_EXCEPTIONS
class FunctionNotDefined:public exception,Object{
    const char* function_name;
    public:

    FunctionNotDefined(const char* function_name);
    const char* what();
    string toString();
};
class OperatorNotDefined:public std::exception,Object{
    const char* op;
    public:

    OperatorNotDefined(const char* op);
    const char* what();
    string toString();
};
#endif