#include "ternmem.h"
#include "doublingarray.h"
#ifndef DATA_LENGTH
#define DATA_LENGTH 1000
#endif

struct jump {
    char* name;
    int location;
}

void freejump(void* a){
    struct jump* b = (struct jump*)a;
    free(b->name);
    free(a);
}

struct instrmem{
    DoubArr* instructions; /* instruction pointers */
    DoubArr* jumplocs; /*struct jump ptrs*/
    int length;
    int jumplen;
};

struct datamem{
    Tryte** data;
    int length;
};

InstrMem* instrmem_init(FILE* code){
    InstrMem* instr;
    DoubArr* instructions;
    DoubArr* jumplocs;
    int jump;
    
    instr = (InstrMem*)malloc(sizeof(InstrMem));

    
    
    return instr;
}

void destroy_instrmem(InstrMem* instr){
    int i; Tryte* t;
    for(i=0;i<instr->jumplen;i++){
        t = instr->jumplocs[i];
        if(t != NULL)
            tryte_destroy(t);
    }
    free(instr->jumplocs);
    for(i=0;i<instr->length;i++){
        t = instr->instructions[i];
        if(t != NULL)
            tryte_destroy(t);
    }
    free(instr->instructions);
    free(instr);
}

Tryte* get_instr(InstrMem* instr, int location){
    if(instr == NULL)
        return NULL;
    if(location < 0 || location >= instr->length)
        return NULL;
    return instr->instructions[location];
}

DataMem* datamem_init(){
    DataMem* dm = (DataMem*)malloc(sizeof(DataMem));
    Tryte** tarr = (Tryte**)calloc(DATA_LENGTH,sizeof(Tryte*));
    if(dm != NULL && tarr != NULL){
        dm->length = DATA_LENGTH;
        dm->data = tarr;
    } else if(dm == NULL && tarr != NULL){
        free(tarr);
    } else if(dm != NULL && tarr == NULL){
        free(dm);
        dm = NULL;
    }
    return dm;
}

void add_data(DataMem* dm, Tryte* add, int position){
    if(dm == NULL)
        return;
    if(dm->data[position] != NULL){
        free(dm->data[position]);
    }
    dm->data[position] = add;
}

Tryte* get_data(DataMem* dm, int location){
    if(dm == NULL)
        return NULL;
    return dm->data[position];
}

void destroy_datamem(DataMem* dm){
    int i;
    for(i=0;i<dm->length;i++)
        free(dm->data[position]);
    free(dm->data);
    free(dm);
}
