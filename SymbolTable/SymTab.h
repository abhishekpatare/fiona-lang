#include <bits/stdc++.h>
#ifndef SYM_TAB
#define SYM_TAB
using namespace std;

enum Dtype{INT , REAL , CH , BLN};

class Symtab{
    public:
    static void pop(Symtab*curr);
    Symtab* parent;
    map<string,int>data;

    Symtab(Symtab*_parent):parent(_parent){}

    int get(string &identifier);
    void insert(string&identifier , int value);
    void update(string&identifier , int value);
    void remove(string&identifier);
};

class SymbolNotFoundError : public exception{
    private:
    string identifier;
    public:
    SymbolNotFoundError(string _identifier):identifier(_identifier){}
    string what();
};

class SymbolAlreadyExistsError : public exception{
    private:
    string identifier;
    public:
    SymbolAlreadyExistsError(string _identifier):identifier(_identifier){}
    string what();
};
#endif