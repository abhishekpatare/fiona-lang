#include "Assignment.h"
#include "../Expressions/ReturnObj.h"

ReturnObj* AssignmentNode::execute(){
    SymbolTable* curr_tab = curr_scope->sym_tab;
    DType* val = exp->get_value();
    curr_tab->insert_byval(id,val);
    return new ReturnObj(nullptr, false, false);
}