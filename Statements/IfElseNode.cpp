#include "IfElseNode.h"

IfElseNode::IfElseNode(ExpressionNode *cond,BlockNode*blk1,BlockNode*blk2){
    this->cond=cond;
    this->blk1 = blk1;
    this->blk2 = blk2;
};

void IfElseNode::execute(){
    curr_scope->PushSymTab();
    if(cond->get_value()->getBoolValue()){
        blk1->execute();
    }else if(blk2!=nullptr){
        blk2->execute();
    }
    curr_scope->PopSymTab();
}