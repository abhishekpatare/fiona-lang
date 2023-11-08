#include "Declaration.h"


DeclarationNode::DeclarationNode(identifier id , ExpressionNode* exp){
    this->id = id;
    this->exp = exp;
}
ReturnObj* DeclarationNode::execute(){
    SymbolTable* curr_sym_tab = curr_scope->sym_tab;
    curr_sym_tab->create(id);
    if(exp == nullptr) return new ReturnObj(nullptr,false,false);
    curr_sym_tab->insert_byval(id,exp->get_value());
    return new ReturnObj(nullptr,false,false);
}