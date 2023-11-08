#include "BlockNode.h"



BlockNode::BlockNode(StatementList* s_list):s_list(s_list){}

ReturnObj* BlockNode::execute(){
    curr_scope->PushSymTab();
    if(s_list!=nullptr){
        ReturnObj* tmp=s_list->execute();
        if(tmp->is_return || tmp->is_break){
            curr_scope->PopSymTab();
            return tmp;
        }
    }
    curr_scope->PopSymTab();
    return new ReturnObj(nullptr , false , false);
}