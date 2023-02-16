#include "BlockNode.h"

void BlockNode::execute(){
    for(auto x: statements){
        x->execute();
    }
}