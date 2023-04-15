#include "Assignment.h"

void AssignmentNode::execute(){
    SymbolTable* curr_tab = curr_scope->sym_tab;
    DType* val = exp->get_value();
    curr_tab->insert(id,val);
}