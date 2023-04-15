#include "Literals.h"

DType* Literal::get_value(){
    return this->dt;
}
IntegerLiteral::IntegerLiteral(int val):Literal(new IntData(val)){};
FloatLiteral::FloatLiteral(float val):Literal(new FloatData(val)){};
BoolLiteral::BoolLiteral(bool val):Literal(new BoolData(val)){};