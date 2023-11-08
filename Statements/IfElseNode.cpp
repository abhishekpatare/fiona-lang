#include "IfElseNode.h"

IfElseNode::IfElseNode(ExpressionNode *cond,BlockNode*blk1,BlockNode*blk2){
    this->cond=cond;
    this->blk1 = blk1;
    this->blk2 = blk2;
};

ReturnObj* IfElseNode::execute(){
    curr_scope->PushSymTab();
    if(cond->get_value()->getBoolValue()){
        ReturnObj*tmp = blk1->execute();
        if(tmp->is_break||tmp->is_return){
             curr_scope->PopSymTab();
             return tmp;
        }
    }else if(blk2!=nullptr){
        ReturnObj*tmp = blk1->execute();
        if(tmp->is_break||tmp->is_return){
             curr_scope->PopSymTab();
             return tmp;
        }
    }
    curr_scope->PopSymTab();
    return new ReturnObj(nullptr,false,false);
}