#include "Declaration.h"

IntegerDeclaration::IntegerDeclaration(identifier name, int value):Variable(name){
    this->name=name;
    this->value=value;
}

void IntegerDeclaration::execute(){
    SymTab::insert(name, value);
}

BooleanDeclaration::BooleanDeclaration(identifier name, bool value):Variable(name){
    this->name=name;
    this->value=value;
}

void BooleanDeclaration::execute(){
    SymTab::insert(name, value);
}