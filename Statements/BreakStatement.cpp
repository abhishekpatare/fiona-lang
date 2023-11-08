#include "BreakStatement.h"

ReturnObj* BreakNode::execute(){
    return new ReturnObj(nullptr, true, false);
}