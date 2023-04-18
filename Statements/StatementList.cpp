#include "StatementList.h"

StatementList::StatementList(StatementList* left, StatementNode* right):left(left),right(right){}

void StatementList::execute(){
    if(left!=nullptr){
        left->execute();
    }
    right->execute();
}