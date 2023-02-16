#include "IO.h"
#include <iostream>

template<typename T>
void PrintNode<T>::execute(){
    std::cout<<this->exp->get_value();
}
void ScanNode::execute(){
    // Todo
}
