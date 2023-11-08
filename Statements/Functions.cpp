#include "Functions.h"

void get_param_list(ArgList* p , vector<identifier>&params){
    VariableNode* var=dynamic_cast<VariableNode*>(p->right);
    if(p->left == nullptr){
        if(var) params.push_back(var->id);
        return ;
    }
    get_param_list(p->left , params);
    params.push_back(var->id);
}

void get_arg_list(ArgList* p , vector<DType*>&args){
    if(p->left == nullptr){
        args.push_back(p->right->get_value());
        return;
    }
    else{
        get_arg_list(p->left , args);
        args.push_back(p->right->get_value());
    }
}

ReturnObj* FunctionDefinitionNode::execute(){
    identifier func_name;
    vector<identifier>params;
    get_param_list(parameters,params);
    SymbolTable* curr_tab = curr_scope->sym_tab;
    curr_tab->insert_func(id , params,blk);
    return new ReturnObj(nullptr,false,false);
}
DType* FunctionCallNode::get_value(){
    
    vector<DType*>arglist;
    get_arg_list(args ,arglist );
    SymbolTable* curr_tab = curr_scope->sym_tab;
    FunctionEntry* fn = curr_tab->resolve_func(id);
    pushScope();
    curr_tab =curr_scope->sym_tab;
    for(int i = 0;i<fn->parameters.size();++i){
        curr_tab->create(fn->parameters[i]);
        curr_tab->insert_byval(fn->parameters[i] , arglist[i]);
    }
    ReturnObj* tmp =fn->blk->execute();
    if(tmp->is_return){
        popScope();
        return tmp->get_value();
    }
    popScope();
    return nullptr;
}

