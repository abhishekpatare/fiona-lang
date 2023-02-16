#include "Loops.h"

void LoopNode::execute(){
    while(true){
        blk->execute();
    }
}

void ForNode::execute(){
    //todo
}

void WhileNode::execute(){
    while(cond->get_value()){
        blk->execute();
    }
}