#include "SymTab.h"
#include "stdexcept"


SymTab::SymTab(int size){
    tab_size=size;
    is_filled.resize(size);
    entries.resize(size);
}


dtype SymTab::lookup(identifier name){
    if(identifier_dict.find(name)!=identifier_dict.end()){
        sid id=identifier_dict[name];
        return entries[id]->type;
    }
    else{
        return NONE;
    }
}


void SymTab::insert(identifier name, int value){
    for(int i=0;i<tab_size;i++){
        if(!is_filled[i]){
            SymTabEntry* ent  = (SymTabEntry*)malloc(sizeof(SymTabEntry));
            int* v = (int*)malloc(sizeof(int));
            (*v)=value;
            ent->ptr = v;
            identifier_dict[name]=i;
            is_filled[i]=true;
            ent->type = INT;
            break;
        }
        if(i==tab_size-1){
            throw std::runtime_error("error");
        }
    }
}


int SymTab::get_value(sid id){
    return *((int*)entries[id]->ptr);
}


sid SymTab::get_sid(identifier name){
    return identifier_dict[name];
}

void SymTab::assign(identifier id, int value){
    sid id1=identifier_dict[id];
    *((int*)(entries[id1]->ptr))=value;
}

