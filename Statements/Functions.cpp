#include "Functions.h"

void get_param_list(ParamList* p , vector<identifier>&params){
    if(p->left == nullptr)return;
    get_param_list(p->left , params);
    params.push_back(p->right);
}

void get_arg_list(ArgList* p , vector<DType*>&args){
    if(p->left == nullptr)return;
    get_arg_list(p->left , args);
    args.push_back(p->right->get_value());
}

void FunctionDefinitionNode::execute(){
    identifier func_name;
    vector<identifier>params;
    get_param_list(parameters,params);
    SymbolTable* curr_tab = curr_scope->sym_tab;
    curr_tab->insert_func(id , params,blk);
}
void FunctionCallNode::execute(){
    
    vector<DType*>arglist;
    get_arg_list(args ,arglist );
    SymbolTable* curr_tab = curr_scope->sym_tab;
    FunctionEntry* fn = curr_tab->resolve_func(id);
    pushScope();
    curr_tab =curr_scope->sym_tab;
    for(int i = 0;i<fn->parameters.size();++i){
        curr_tab->insertby_val(fn->parameters[i] , arglist[i]);
    }
    fn->blk->execute();
    popScope();
}

