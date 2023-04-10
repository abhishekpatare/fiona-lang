#include "data_types.h"

int main(){
    CharData c('a'), h('b');

    cout<<c.toString()<<"\n";
    cout<<(c+&h)->toString()<<"\n";

    return 0;
}