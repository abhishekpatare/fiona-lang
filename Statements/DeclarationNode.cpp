#include "Declaration.h"


DeclarationNode::DeclarationNode(D_TYPE type , identifier id , ExpressionNode* exp){
    this->type = type;
    this->id = id;
    this->exp = exp;
}
void DeclarationNode::execute(){
    SymbolTable* curr_sym_tab = curr_scope->sym_tab;
    curr_sym_tab->create(id);
    if(exp == nullptr)return ;
    curr_sym_tab->insert(id,exp->get_value());
}