#ifndef SYM_TAB_ENTRY
#define SYM_TAB_ENTRY

typedef unsigned int sid;
typedef unsigned int const_sid;


class SymTabEntry{
    public:
    int get_value();
    sid get_sid();
};

#endif