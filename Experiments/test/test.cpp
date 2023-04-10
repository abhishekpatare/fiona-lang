#include "data_types.h"
#include <iostream>

using namespace std;

int main(){
    
    FloatData f(7.4), g(6.98);
    IntData i(6), h(7);
    
    cout<<(f+&g)->getFloatValue()<<"\n";
    cout<<(f-&g)->toString()<<"\n";
    cout<<(f/&g)->toString()<<"\n";
    cout<<(f*&g)->toString()<<"\n";
    
    cout<<"\n\n";

    cout<<(i+&h)->toString()<<"\n";
    cout<<(i-&h)->toString()<<"\n";
    cout<<(i/&h)->toString()<<"\n";
    cout<<(i*&h)->toString()<<"\n";
    cout<<(i+&h)->type<<"\n";

    cout<<"\n\n";

    cout<<(i+&f)->toString()<<"\n";
    cout<<(i-&f)->toString()<<"\n";
    cout<<(i/&f)->toString()<<"\n";
    cout<<(i*&f)->toString()<<"\n";
    cout<<(i+&f)->type<<"\n";

    cout<<"\n\n";

    cout<<(g+&h)->toString()<<"\n";
    cout<<(g-&h)->toString()<<"\n";
    cout<<(g/&h)->toString()<<"\n";
    cout<<(g*&h)->toString()<<"\n";
    cout<<(g+&h)->type<<"\n";

    float t=0.1;
    cout<<(t==0.1)<<"\n";
    return 0;
}