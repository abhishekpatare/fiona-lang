#include "Variable.h"

Variable::Variable(identifier name){
    this->name=name;
}

identifier Variable::get_id(){
    return this->name;
}

sid Variable::get_sid(){
    return SymTab::get_sid(name);
}