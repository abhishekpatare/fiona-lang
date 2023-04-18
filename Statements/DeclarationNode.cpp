#include "Declaration.h"


DeclarationNode::DeclarationNode(identifier id , ExpressionNode* exp){
    this->id = id;
    this->exp = exp;
}
void DeclarationNode::execute(){
    SymbolTable* curr_sym_tab = curr_scope->sym_tab;
    curr_sym_tab->create(id);
    if(exp == nullptr)return ;
    curr_sym_tab->insert_byval(id,exp->get_value());
}