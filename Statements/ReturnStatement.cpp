#include "ReturnStatement.h"

ReturnObj* ReturnNode::execute(){
    return new ReturnObj(exp->get_value(), false, true);
}