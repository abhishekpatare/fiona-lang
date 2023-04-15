#include "fiona_base.h"
#include "Exceptions,h"

#ifndef FIONA_D_TYPES
#define FIONA_D_TYPES
enum D_TYPE{
    FLOAT,
    INT,
    BOOL,
    CHAR
};
class FloatData;
class IntData;
class DType;

// class BoolData;
// class CharData;

class DType{
    public:
    D_TYPE type;
    DType(D_TYPE type);
    virtual float getFloatValue();
    virtual int getIntValue();
    virtual bool getBoolValue();
    virtual DType* operator+(DType* b);
    virtual DType* operator-(DType* b);
    virtual DType* operator*(DType* b);
    virtual DType* operator/(DType* b);
    virtual DType* operator>(DType* b);
    virtual DType* operator<(DType* b);
    virtual DType* operator>=(DType* b);
    virtual DType* operator<=(DType* b);
    virtual DType* operator==(DType* b);
    virtual DType* operator!=(DType* b);
    virtual DType* operator&(DType* b);
    virtual DType* operator|(DType* b);
    virtual DType* operator^(DType* b);
    virtual DType* operator&&(DType* b);
    virtual DType* operator||(DType* b);
    virtual DType* operator-();
    virtual DType* operator!();
    virtual string toString(){
        
    }
    

};
class FloatData : public DType{
    public:
    float value;
    FloatData(float value);
    float getFloatValue();
    bool getBoolValue();
    int getIntValue();
    string toString()override;
};
class IntData : public DType{
    public:
    int value;
    IntData(int value);
    float getFloatValue();
    bool getBoolValue();
    int getIntValue();
    string toString()override;
};

class BoolData : public DType{
    public:
    bool value;
    BoolData(bool value);
    float getFloatValue();
    bool getBoolValue();
    int getIntValue();
    string toString()override;
};

class CharData : public DType{
    public:
    char value;
    CharData(char value);
    float getFloatValue();
    bool getBoolValue();
    int getIntValue();
    string toString()override;
};

#endif