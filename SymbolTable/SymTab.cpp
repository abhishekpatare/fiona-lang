#include "SymTab.h"
#include "stdexcept"

template<typename T>
VarTab<T>::VarTab(int size){
    tab_size=size;
    is_filled.resize(size);
    entries.resize(size);
}

template<typename T>
bool VarTab<T>::lookup(identifier name){
    if(identifier_dict.find(name)!=identifier_dict.end()){
        return true;
    }
    else{
        return false;
    }
}

template<typename T>
void VarTab<T>::insert(identifier name, T value){
    if(identifier_dict.find(name)!=identifier_dict.end()){
        entries[identifier_dict[name]]=value;
    }
    else{
        for(int i=0;i<tab_size;i++){
            if(!is_filled[i]){
                identifier_dict[name]=i;
                is_filled[i]=true;
                sid_dict[i]=name;
                entries[i]=value;
                break;
            }
            if(i==tab_size-1){
                throw std::runtime_error("error")
            }
        }
    }
}

template<typename T>
T VarTab<T>::get_value(sid id){
    return entries[i];
}

template<typename T>
sid VarTab<T>::get_sid(identifier name){
    return identifier_dict[name];
}
