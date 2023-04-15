#include "Variables.h"
#include "fiona_base.h"
DType* VariableNode::get_value(){
    SymbolTable* curr_tab = curr_scope->sym_tab;
    return curr_tab->resolve(id);
}