#include <bits/stdc++.h>
using namespace std;


enum D_TYPE{
    FLOAT,
    INT,
    BOOL,
    CHAR
};
class IntData;
class FloatData;


class Data{
    public:
    D_TYPE type;
    Data(D_TYPE type){
        this->type = type;
    }
    
    virtual float getFloatValue()=0;
    virtual int getIntValue()=0;
    virtual bool getBoolValue()=0;
    // virtual char getCharValue()=0;
    virtual string toString()=0;
    virtual Data* operator+(Data* b);

};

class FloatData : public Data{
    public:
    float value;
    FloatData(float value):Data(FLOAT){
        this->value = value;
    }
    float getFloatValue(){
        return this->value;
    }
    bool getBoolValue(){
        return this->value == 0;
    }
    int getIntValue(){
        return (int)this->value;
    }
    string toString(){
        return to_string(this->value);
    }
};
class IntData : public Data{
    public:
    int value;
    IntData(int value):Data(INT){
        this->value = value;
    }
    float getFloatValue(){
        return (float)this->value;
    }
    bool getBoolValue(){
        return this->value == 0;
    }
    int getIntValue(){
        return this->value;
    }
    string toString(){
        return to_string(this->value);
    }
};

Data* Data::operator +(Data* b){
        
        if(this->type == FLOAT || b->type == FLOAT){
            float value = this->getFloatValue()+b->getFloatValue();
            FloatData *F = new FloatData(value);
            return F;
        }
       
        int value = this->getIntValue() + b->getIntValue();
        IntData *I = new IntData(value);
        return I;
    }


int main(){
    FloatData f(3.4),g(4.5);
    IntData i(6);
    cout<<f.toString()<<g.toString()<<'\n';
    cout<<(f+&i)->type<<'\n';
    cout<<(i+&f)->type<<'\n';
    return 0;
}

