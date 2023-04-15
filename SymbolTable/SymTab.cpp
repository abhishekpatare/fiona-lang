#include "SymTab.h"


void Symtab::pop(Symtab* curr){
    curr = curr->parent;
}

int Symtab::get(string &identifier){
    
    if(this->data.find(identifier)!=this->data.end()){
        return this->data[identifier];
    }
    if(this->parent!=nullptr){
        return this->parent->get(identifier);
    }
    throw SymbolNotFoundError(identifier);
}

void Symtab::insert(string&identifier , int value){
    if(this->data.find(identifier)==this->data.end()){
        this->data[identifier] = value;
    }else{
        throw SymbolAlreadyExistsError(identifier);
    }
}


void Symtab::update(string &identifier,int value){
    
    if(this->data.find(identifier)!=this->data.end()){
        this->data[identifier] = value;
    }
    if(this->parent!=nullptr){
        this->parent->update(identifier,value);
    }
    throw SymbolNotFoundError(identifier);
}

string SymbolNotFoundError::what(){
    return "Variable with name \"" + this->identifier +"\" does not exists !!";
}

string SymbolAlreadyExistsError::what(){
    return "Variable with name \"" + this->identifier +"\" already exists !!";
}