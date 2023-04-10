#include "data_types.h"

int main(){
    FloatData f(6.6), g(7.7);
    cout<<(f>&g)->toString()<<"\n";
    cout<<(f>&g)->type;

    return 0;
}