#include "Loops.h"

LoopNode::LoopNode(BlockNode *blk):blk(blk){};
void LoopNode::execute(){
    curr_scope->PushSymab();
    while(true){
        blk->execute();
    }
    curr_scope->PopSymab();
}

ForNode::ForNode(identifier loopvar , ExpressionNode*l,ExpressionNode*r,ExpressionNode*step,BlockNode*blk):loopvar(loopvar),l(l),r(r),step(step),blk(blk){};

void ForNode::execute(){
    curr_scope->PushSymTab();
    SymbolTable*curr_tab = curr_scope->sym_tab;
    curr_tab->insert(loopvar,new IntData(l->get_value()->getIntValue()));
    IntData* i = (IntData*)curr_tab->resolve(loopvar);
    IntData*d = (step == nullptr)?new IntData(1):(IntData*)step->get_value();
    while(i->getIntValue() <r->get_value()->getIntValue()){
        blk->execute();
        curr_tab->update(loopvar , i->getIntValue()+d->getIntValue());
    } 
    //todo
}

WhileNode::WhileNode(ExpressionNode *cond,BlockNode *blk):cond(cond),blk(blk){};
void WhileNode::execute(){
    curr_scope->PushSymTab();
    while(cond->get_value()->getBoolValue()){
        blk->execute();
    }
    curr_scope->PopSymTab();
}