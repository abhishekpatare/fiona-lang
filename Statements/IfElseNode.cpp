#include "IfElseNode.h"

void IfElseNode::execute(){
    if(cond->get_value()){
        blk1->execute();
    }else if(blk2!=nullptr){
        blk2->execute();
    }
}