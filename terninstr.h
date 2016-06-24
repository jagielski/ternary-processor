#ifndef _TERNINSTR_H
#define _TERNINSTR_H
#include "ternterm.h"

typedef struct terninstr TernInstr;

TernInstr* instr_init(char opcode, char dest, char immediate);

void instr_setopcode(TernInstr*, Tryte* opcode);

Tryte* instr_getopcode(TernInstr*);

void instr_setdest(TernInstr*, Tryte* dest);

Tryte* instr_getdest(TernInstr*);

void instr_setimm(TernInstr*, Tryte* imm);

Tryte* instr_getimm(TernInstr*);

void instr_destroy(TernInstr*);

#endif /*_TERNINSTR_H */