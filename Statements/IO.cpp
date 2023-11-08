#include "IO.h"
#include <iostream>
ReturnObj* PrintNode::execute(){
    vector<DType*> exprs;
    get_arg_list(arg, exprs);
    for(auto x: exprs) cout << x->toString() << "\n";
    return new ReturnObj(nullptr,false,false);
}