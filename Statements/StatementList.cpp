#include "StatementList.h"

StatementList::StatementList(StatementList* left, StatementNode* right):left(left),right(right){}

ReturnObj* StatementList::execute(){
    if(left!=nullptr){
        ReturnObj* tmp = left->execute();
        if(tmp->is_break || tmp->is_return)return tmp;
    }
    return right->execute();
}