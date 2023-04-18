#include "BlockNode.h"



BlockNode::BlockNode(StatementList* s_list):s_list(s_list){}

void BlockNode::execute(){
    curr_scope->PushSymTab();
    if(s_list!=nullptr) s_list->execute();
    curr_scope->PopSymTab();
}