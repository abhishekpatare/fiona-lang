#include <bits/stdc++.h>
using namespace std;

#ifndef FIONA_BASE
#define FIONA_BASE

typedef string identifier;



class Object{
    public:
    virtual string toString();
    // virtual string toString();
    Object virtual operator+(Object a);
    Object virtual operator-(Object a);
    Object virtual operator*(Object a);
    Object virtual operator/(Object a);
    // Object virtual operator%(Object a);
};
#endif

