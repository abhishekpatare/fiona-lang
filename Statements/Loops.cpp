#include "Loops.h"

LoopNode::LoopNode(BlockNode *blk):blk(blk){};
void LoopNode::execute(){
    while(true){
        blk->execute();
    }
}

ForNode::ForNode(sid id , Integer*l,Integer*r):id(id),l(l),r(r){};
void ForNode::execute(){
    //todo
}

WhileNode::WhileNode(BooleanExpression *cond,BlockNode *blk):cond(cond),blk(blk){};
void WhileNode::execute(){
    while(cond->get_value()){
        blk->execute();
    }
}