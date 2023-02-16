#include "IntegerExpression.h"

int IntegerLiteralNode::get_value(){
    return this->value;
}

//IntegerConstant node
int IntegerConstantNode::get_value(){
    // Todo
}
sid IntegerConstantNode::get_sid(){
    return this->id;
}

//IntegerAddition
int IntegerAdditionNode::get_value(){
    int left_value = this->left->get_value();
    int right_value = this->right->get_value();
    return left_value+right_value;
}

// IntegerSubtraction
int IntegerSubtractionNode::get_value(){
    int left_value = this->left->get_value();
    int right_value = this->right->get_value();
    return left_value-right_value;
}

// IntegerMultiplication
int IntegerMultiplicationNode::get_value(){
    int left_value = this->left->get_value();
    int right_value = this->right->get_value();
    return left_value*right_value;
}

// IntegerDivision
int IntegerDivisionionNode::get_value(){
    int left_value = this->left->get_value();
    int right_value = this->right->get_value();
    return left_value/right_value;
}

