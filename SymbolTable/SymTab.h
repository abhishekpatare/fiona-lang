#include <string>
#include <vector>
#include <map>
#ifndef SYM_TAB
#define SYM_TAB

const int TAB_SIZE=100;

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



class SymTab{
    static std::vector<bool> is_filled;
    static std::vector<SymTabEntry*> entries;
    static std::map<identifier, sid> identifier_dict;
    

    public:
    SymTab();
    static dtype lookup(identifier name);
    static void insert(identifier name, int value);
    static void insert(identifier name, bool value);
    static int get_value(sid id);
    static sid get_sid(identifier name);
    static void assign(identifier &prev_id, identifier &new_id);
    static void assign(identifier id, int value);
};


#endif