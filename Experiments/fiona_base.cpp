#include "fiona_base.h"
#include "Exceptions,h"

FunctionNotDefined:: FunctionNotDefined(const char* function_name):exception(){
    this->function_name = function_name;
}
const char* FunctionNotDefined:: what(){
    return ("function "+string(function_name)+" not defined for give set of arguments").c_str();
}
string FunctionNotDefined::toString(){
    return ("function "+string(function_name)+" not defined for give set of arguments");

}

OperatorNotDefined::OperatorNotDefined(const char* op):exception(){
    this->op = op;
}
const char* OperatorNotDefined::what(){
    return ("Operator "+string(op)+" not defined for give set of arguments").c_str();
}
string OperatorNotDefined::toString(){
    return ("Operator "+string(op)+" not defined for give set of arguments");

}

string Object::toString(){
    throw FunctionNotDefined("toString");
}
Object Object::operator+(Object a){
    throw OperatorNotDefined("+");
}
Object Object::operator-(Object a){
    throw OperatorNotDefined("-");
}
Object Object::operator*(Object a){
    throw OperatorNotDefined("*");
}
Object Object::operator/(Object a){
    throw OperatorNotDefined("/");
}
// Object Object::operator%(Object a){
//     throw OperatorNotDefined("%");
// }




