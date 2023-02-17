#include <string>
#include <vector>
#include <map>
#ifndef SYM_TAB
#define SYM_TAB

typedef unsigned int sid;
typedef unsigned int const_sid;
typedef std::string identifier;

enum dtype{BOOL, INT, NONE};

class SymTabEntry{
    public:
    identifier id;
    dtype type;
    void *ptr;

};


template<typename T>
class SymTab{
    int tab_size;
    std::vector<bool> is_filled;
    std::vector<SymTabEntry*> entries;
    std::map<identifier, sid> identifier_dict;
    

    public:
    SymTab(int size);
    dtype lookup(identifier name);
    void insert(identifier name, T value);
    T get_value(sid id);
    sid get_sid(identifier name);
};


#endif