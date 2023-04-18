#include "data_types.h"

DType::DType(D_TYPE type){
    this->type = type;
}

float DType::getFloatValue(){
    throw FunctionNotDefined("getFloatValue");
}
int DType::getIntValue(){
    throw FunctionNotDefined("getIntValue");
}
bool DType::getBoolValue(){
    throw FunctionNotDefined("getBoolValue");
}
DType* DType::operator +(DType* b){
    
    if(this->type == FLOAT || b->type == FLOAT){
        float value = this->getFloatValue()+b->getFloatValue();
        FloatData *F = new FloatData(value);
        return F;
    }
    
    int value = this->getIntValue() + b->getIntValue();
    IntData *I = new IntData(value);
    return I;
}
DType* DType::operator -(DType* b){
    
    if(this->type == FLOAT || b->type == FLOAT){
        float value = this->getFloatValue()-b->getFloatValue();
        FloatData *F = new FloatData(value);
        return F;
    }
    
    int value = this->getIntValue() - b->getIntValue();
    IntData *I = new IntData(value);
    return I;
}
DType* DType::operator *(DType* b){
    
    if(this->type == FLOAT || b->type == FLOAT){
        float value = this->getFloatValue()*b->getFloatValue();
        FloatData *F = new FloatData(value);
        return F;
    }
    
    int value = this->getIntValue() * b->getIntValue();
    IntData *I = new IntData(value);
    return I;
}
DType* DType::operator /(DType* b){
    
    if(this->type == FLOAT || b->type == FLOAT){
        float value = this->getFloatValue()/b->getFloatValue();
        FloatData *F = new FloatData(value);
        return F;
    }
    int value = this->getIntValue() / b->getIntValue();
    IntData *I = new IntData(value);
    return I;
}

DType* DType::operator >(DType* b){
    bool value;
    if(this->type == FLOAT || b->type == FLOAT){
        bool value = this->getFloatValue()>b->getFloatValue();
        
    }
    else{
        value = this->getIntValue() > b->getIntValue();
    }
    BoolData *B=new BoolData(value);
    return B;
}

DType* DType::operator <(DType* b){
    bool value;
    if(this->type == FLOAT || b->type == FLOAT){
        bool value = this->getFloatValue()<b->getFloatValue();
        
    }
    else{
        value = this->getIntValue() < b->getIntValue();
    }
    BoolData *B=new BoolData(value);
    return B;
}

DType* DType::operator >=(DType* b){
    bool value;
    if(this->type == FLOAT || b->type == FLOAT){
        bool value = this->getFloatValue()>=b->getFloatValue();
        
    }
    else{
        value = this->getIntValue() >= b->getIntValue();
    }
    BoolData *B=new BoolData(value);
    return B;
}

DType* DType::operator <=(DType* b){
    bool value;
    if(this->type == FLOAT || b->type == FLOAT){
        bool value = this->getFloatValue()<=b->getFloatValue();
        
    }
    else{
        value = this->getIntValue() <= b->getIntValue();
    }
    BoolData *B=new BoolData(value);
    return B;
}

DType* DType::operator ==(DType* b){
    bool value;
    if(this->type == FLOAT || b->type == FLOAT){
        bool value = this->getFloatValue()==b->getFloatValue();
        
    }
    else{
        value = this->getIntValue() == b->getIntValue();
    }
    BoolData *B=new BoolData(value);
    return B;
}
DType* DType::operator !=(DType* b){
    bool value;
    if(this->type == FLOAT || b->type == FLOAT){
        bool value = this->getFloatValue()!=b->getFloatValue();
        
    }
    else{
        value = this->getIntValue() != b->getIntValue();
    }
    BoolData *B=new BoolData(value);
    return B;
}

DType* DType::operator &(DType* b){
    
    if(this->type == FLOAT || b->type == FLOAT){
        throw OperatorNotDefined("&");
    }

    if(this->type==BOOL&&b->type==BOOL){
        bool value=this->getBoolValue()&b->getBoolValue();
        BoolData *B=new BoolData(value);
        return B;
    }
    
    int value = this->getIntValue() & b->getIntValue();
    IntData *I = new IntData(value);
    return I;
}

DType* DType::operator |(DType* b){
    
    if(this->type == FLOAT || b->type == FLOAT){
        throw OperatorNotDefined("&");
    }

    if(this->type==BOOL&&b->type==BOOL){
        bool value=this->getBoolValue()|b->getBoolValue();
        BoolData *B=new BoolData(value);
        return B;
    }
    
    int value = this->getIntValue() | b->getIntValue();
    IntData *I = new IntData(value);
    return I;
}

DType* DType::operator ^(DType* b){
    
    if(this->type == FLOAT || b->type == FLOAT){
        throw OperatorNotDefined("&");
    }

    if(this->type==BOOL&&b->type==BOOL){
        bool value=this->getBoolValue()^b->getBoolValue();
        BoolData *B=new BoolData(value);
        return B;
    }
    
    int value = this->getIntValue() ^ b->getIntValue();
    IntData *I = new IntData(value);
    return I;
}

DType* DType::operator&&(DType* b){
    bool value = this->getBoolValue()&&b->getBoolValue();
    BoolData *B=new BoolData(value);
    return B;
}

DType* DType::operator||(DType* b){
    bool value = this->getBoolValue()||b->getBoolValue();
    BoolData *B=new BoolData(value);
    return B;
}
DType* DType::operator -(){
    
    if(this->type == FLOAT){
        FloatData *F = new FloatData(-this->getFloatValue());
        return F;
    }
    IntData *I = new IntData(-this->getIntValue());
    return I;
    throw OperatorNotDefined("unary -");
}

// DType* DType::operator -(){
    
//     if(this->type == FLOAT){
//         FloatData *F = new FloatData(-this->getFloatValue());
//         return F;
//     }
//     IntData *I = new IntData(-this->getIntValue());
//     return I;
// }
DType* DType::operator !(){
    
    if(this->type == INT){
        IntData *I = new IntData(!this->getIntValue());
        return I;
    }
    if(this->type == CHAR){
        CharData *C = new CharData((char)!this->getIntValue());
        return C;
    }
    if(this->type  == BOOL){
        BoolData *B = new BoolData(!this->getBoolValue());
        return B;
    }
    throw OperatorNotDefined("unary !");

}


FloatData::FloatData(float value):DType(FLOAT){
    this->value = value;
}
float FloatData::getFloatValue(){
    return this->value;
}
bool FloatData::getBoolValue(){
    return this->value != 0;
}
int FloatData::getIntValue(){
    return (int)this->value;
}
DType* FloatData::clone(){
    DType* copy=new FloatData(this->getFloatValue());
    return copy;
}
string FloatData::toString(){
    return to_string(this->value);
}

IntData::IntData(int value):DType(INT){
    this->value = value;
}
float IntData::getFloatValue(){
    return (float)this->value;
}
bool IntData::getBoolValue(){
    return this->value != 0;
}
int IntData::getIntValue(){
    return this->value;
}
DType* IntData::clone(){
    IntData* copy=new IntData(this->getIntValue());
    return copy;
}
string IntData::toString(){
    return to_string(this->value);
}

BoolData::BoolData(bool value):DType(BOOL){
    this->value = value;
}
float BoolData::getFloatValue(){
    return this->value;
}
bool BoolData::getBoolValue(){
    return this->value;
}
int BoolData::getIntValue(){
    return (int)this->value;
}
DType* BoolData::clone(){
    BoolData* copy=new BoolData(this->getBoolValue());
    return copy;
}
string BoolData::toString(){
    return to_string(this->value);
}

CharData::CharData(char value):DType(CHAR){
    this->value = value;
}
float CharData::getFloatValue(){
    return this->value;
}
bool CharData::getBoolValue(){
    return this->value!=0;
}
int CharData::getIntValue(){
    return (int)this->value;
}
DType* CharData::clone(){
    CharData* copy=new CharData(this->getIntValue());
    return copy;
}
string CharData::toString(){
    string f({this->value});
    return f;
}