#include <string>
#ifndef SYM_TAB
#define SYM_TAB

typedef unsigned int sid;
typedef unsigned int const_sid;
typedef std::string identifier;

enum dtypes{BOOL, INT, NONE};

template<typename T>
class VarTab{
    int tab_size;
    vector<bool> is_filled;
    vector<T> entries;
    map<identifier, sid> sid_dict;
    map<sid, identifier> identifier_dict;
    

    public:
    VarTab(int size);
    bool lookup(string identifier);
    void insert(string identifier, T value);
    T get_value(sid id);
    sid get_sid(string identifier);
};


#endif