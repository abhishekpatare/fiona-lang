#include "Assignment.h"

AssignmentIntegerNode::AssignmentIntegerNode(Variable *left, IntegerExpressionNode *right):Variable(left->get_id()){
    this->left=left;
    this->right=right;
}

AssignmentBooleanNode::AssignmentBooleanNode(Variable *left, BooleanExpression *right):Variable(left->get_id()){
    this->left=left;
    this->right=right;
}

void AssignmentBooleanNode::execute(){
    identifier id = left->get_id();
    int value = right->get_value();
    SymTab::assign(id, value);
}

void AssignmentIntegerNode::execute(){
    identifier id = left->get_id();
    int value = right->get_value();
    SymTab::assign(id, value);
}