#include "IntegerExpression.h"

IntegerLiteralNode::IntegerLiteralNode(int value):value(value){};
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
IntegerAdditionNode::IntegerAdditionNode(IntegerExpressionNode *left,IntegerExpressionNode *right):IntegerArithmeticNode(left,right){};
int IntegerAdditionNode::get_value(){
    int left_value = this->left->get_value();
    int right_value = this->right->get_value();
    return left_value+right_value;
}

// IntegerSubtraction
IntegerSubtractionNode::IntegerSubtractionNode(IntegerExpressionNode *left,IntegerExpressionNode *right):IntegerArithmeticNode(left,right){};
int IntegerSubtractionNode::get_value(){
    int left_value = this->left->get_value();
    int right_value = this->right->get_value();
    return left_value-right_value;
}

// IntegerMultiplication
IntegerMultiplicationNode::IntegerMultiplicationNode(IntegerExpressionNode *left,IntegerExpressionNode *right):IntegerArithmeticNode(left,right){};
int IntegerMultiplicationNode::get_value(){
    int left_value = this->left->get_value();
    int right_value = this->right->get_value();
    return left_value*right_value;
}

// IntegerDivision
IntegerDivisionionNode::IntegerDivisionionNode(IntegerExpressionNode *left,IntegerExpressionNode *right):IntegerArithmeticNode(left,right){};
int IntegerDivisionionNode::get_value(){
    int left_value = this->left->get_value();
    int right_value = this->right->get_value();
    return left_value/right_value;
}

