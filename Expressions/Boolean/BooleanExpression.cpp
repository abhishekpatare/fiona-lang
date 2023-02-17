#include "BooleanExpression.h"
#include "../expression.h"
#include "SymTab.h"




//BooleanLiteralNode

BooleanLiteralNode::BooleanLiteralNode(bool value){
    this->value=value;
}

bool BooleanLiteralNode::get_value(){
    return this->value;
}


//BooleanConstantNode


bool BooleanConstantNode::get_value(){
    // return this->value;
    //todo
}


//BooleanVariableNode
sid BooleanVariableNode::get_sid(){
    return this->id;
}

bool BooleanVariableNode::get_value(){
    //todo
}


//BooleanOrNode
BooleanOrNode::BooleanOrNode(BooleanExpression *left, BooleanExpression *right):BooleanOperationNode(left, right){
    
}

bool BooleanOrNode::get_value(){
    bool left = this->left->get_value();
    bool right =  this->right->get_value();
    return (left||right);
}


//BooleanAndNode
BooleanAndNode::BooleanAndNode(BooleanExpression *left, BooleanExpression *right):BooleanOperationNode(left, right){

}
bool BooleanAndNode::get_value(){
    bool left = this->left->get_value();
    bool right =  this->right->get_value();
    return (left&&right);
}


//BooleanXorNode
BooleanXorNode::BooleanXorNode(BooleanExpression *left, BooleanExpression *right):BooleanOperationNode(left, right){

}
bool BooleanXorNode::get_value(){
    bool left = this->left->get_value();
    bool right =  this->right->get_value();
    return (left^right);
}


//BooleanNotNode
BooleanNotNode::BooleanNotNode(bool value){
    this->value=value;
}
bool BooleanNotNode::get_value(){
    return (!this->value);
}