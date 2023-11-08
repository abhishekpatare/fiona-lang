#include "Loops.h"

LoopNode::LoopNode(BlockNode *blk):blk(blk){};
ReturnObj* LoopNode::execute(){
    curr_scope->PushSymTab();
    while(true){
        ReturnObj*tmp = blk->execute();
        if(tmp->is_break || tmp->is_return){
            curr_scope->PopSymTab();
            return tmp;
        }
    }
    curr_scope->PopSymTab();
    return new ReturnObj(nullptr , false , false);
}

ForNode::ForNode(identifier loopvar , ExpressionNode*l,ExpressionNode*r,ExpressionNode*step,BlockNode*blk):loopvar(loopvar),l(l),r(r),step(step),blk(blk){};

ReturnObj* ForNode::execute(){
    curr_scope->PushSymTab();
    SymbolTable*curr_tab = curr_scope->sym_tab;
    curr_tab->insert_byval(loopvar,new IntData(l->get_value()->getIntValue()));
    IntData* i = (IntData*)curr_tab->resolve(loopvar);
    IntData*d = (step == nullptr)?new IntData(1):(IntData*)step->get_value();
    while(i->getIntValue() <r->get_value()->getIntValue()){
        ReturnObj*tmp = blk->execute();
        if(tmp->is_break || tmp->is_return){
            curr_scope->PopSymTab();
            return tmp;
        }
        curr_tab->update_byval(loopvar , *i+d);
        i = (IntData*)curr_tab->resolve(loopvar);
    } 

    curr_scope->PopSymTab();
    return new ReturnObj(nullptr , false , false);

}

WhileNode::WhileNode(ExpressionNode *cond,BlockNode *blk):cond(cond),blk(blk){};
ReturnObj* WhileNode::execute(){
    curr_scope->PushSymTab();
    while(cond->get_value()->getBoolValue()){
        ReturnObj*tmp = blk->execute();
        if(tmp->is_break || tmp->is_return){
            curr_scope->PopSymTab();
            return tmp;
        }
    }
    curr_scope->PopSymTab();
    return new ReturnObj(nullptr , false , false);
}