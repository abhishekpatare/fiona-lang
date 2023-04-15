#include "BinOp.h"

DType* AdditionNode::get_value(){
    return *left->get_value()+ (right->get_value());
}
DType* SubtractionNode::get_value(){
    return *left->get_value()- (right->get_value());
}
DType* MultiplicationNode::get_value(){
    return *left->get_value()* (right->get_value());
}
DType* DivisionNode::get_value(){
    return *left->get_value()/(right->get_value());
}
DType* AndNode::get_value(){
    return *left->get_value()&(right->get_value());
}
DType* OrNode::get_value(){
    return *left->get_value() | (right->get_value());
}
DType* XorNode::get_value(){
    return *left->get_value()^ (right->get_value());
}
DType* SC_And_Node::get_value(){
    return *left->get_value()&&(right->get_value());
}
DType* SC_Or_Node::get_value(){
    return *left->get_value()||(right->get_value());
}
DType* GTNode::get_value(){
    return *left->get_value()>(right->get_value());
}
DType* GENode::get_value(){
    return *left->get_value()>= (right->get_value());
}
DType* LTNode::get_value(){
    return *left->get_value()<(right->get_value());
}
DType* LENode::get_value(){
    return *left->get_value()<= (right->get_value());
}
DType* EQNode::get_value(){
    return *left->get_value()== (right->get_value());
}
DType* NEQNode::get_value(){
    return *left->get_value()!= (right->get_value());
}
