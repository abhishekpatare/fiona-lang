#include "IO.h"
#include <iostream>

template<typename T>
PrintNode<T>::PrintNode(ExpressionNode<T>*exp){
    this->exp = exp;
}
template<typename T>
void PrintNode<T>::execute(){
    std::cout<<this->exp->get_value();
}

ScanNode::ScanNode(sid id){
    this->id = id;
}
void ScanNode::execute(){
    // Todo
}
