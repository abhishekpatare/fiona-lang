#include "IfElseNode.h"

IfElseNode::IfElseNode(BooleanExpression*cond,BlockNode*blk1,BlockNode*blk2){
    this->cond=cond;
    this->blk1 = blk1;
    this->blk2 = blk2;
};

void IfElseNode::execute(){
    if(cond->get_value()){
        blk1->execute();
    }else if(blk2!=nullptr){
        blk2->execute();
    }
}