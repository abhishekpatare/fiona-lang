#include "BooleanExpression.h"
#include "../expression.h"
#include "SymTabEntry.h"

class BooleanExpression:public ExpressionNode<bool>{
    public:
    virtual bool get_value()=0;
};

//BooleanLiteralNode
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
bool BooleanOrNode::get_value(){
    bool left = this->left->get_value();
    bool right =  this->right->get_value();
    return (left||right);
}


//BooleanAndNode
bool BooleanAndNode::get_value(){
    bool left = this->left->get_value();
    bool right =  this->right->get_value();
    return (left&&right);
}


//BooleanXorNode
bool BooleanXorNode::get_value(){
    bool left = this->left->get_value();
    bool right =  this->right->get_value();
    return (left^right);
}


//BooleanNotNode
bool BooleanNotNode::get_value(){
    return (!this->value);
}