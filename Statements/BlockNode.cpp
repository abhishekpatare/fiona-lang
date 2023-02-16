#include "BlockNode.h"


BlockNode::BlockNode(StatementNode*st1 , StatementNode*st2){
    this->st1=st1;
    this->st2=st2;
}
void BlockNode::execute(){
    st1->execute();
    if(st2!=nullptr){
        st2->execute();
    }
}