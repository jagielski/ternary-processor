#include "terninstr.h"

struct terninstr{
    Tryte* opcode;
    Tryte* dest;
    Tryte* immediate;
};

TernInstr* instr_init(char opcode, char dest, char immediate){
    TernInstr* ti = (TernInstr*)malloc(sizeof(TernInstr));
    if(ti != NULL){
        ti->opcode = (Tryte*)tryte_create((int)opcode);
        ti->dest = (Tryte*)tryte_create((int)dest);
        ti->immediate = (Tryte*)tryte_create((int)immediate);
    }
    return ti;
}

void instr_setopcode(TernInstr* ti, Tryte* opcode){
    ti->opcode = opcode;
}

Tryte* instr_getopcode(TernInstr* ti){
    return ti->opcode;
    
}

void instr_setdest(TernInstr* ti, Tryte* dest){
    ti->dest = dest;
}

Tryte* instr_getdest(TernInstr* ti){
    return ti->dest;
}

void instr_setimm(TernInstr* ti, Tryte* imm){
    ti->immediate = imm;
}

Tryte* instr_getimm(TernInstr* ti){
    return ti->immediate;
}

void instr_destroy(TernInstr* ti){
    if(ti->opcode != NULL)
        tryte_destroy(ti->opcode);
    if(ti->dest != NULL)
        tryte_destroy(ti->dest);
    if(ti->immediate != NULL)
        tryte_destroy(ti->immediate);
    free(ti);
}
