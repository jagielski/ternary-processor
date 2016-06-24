#ifndef _TERNMEM_H
#define _TERNMEM_H
#include "ternterm.h"
#include <stdio.h>

typedef struct instrmem InstrMem;

typedef struct datamem DataMem;

InstrMem* instrmem_init(FILE* code);

void destroy_instrmem(InstrMem*);

Tryte* get_instr(InstrMem*, int location);

DataMem* datamem_init();

void add_data(DataMem* dm, Tryte* add, int position);

Tryte* get_data(DataMem*, int location);

void destroy_datamem(DataMem*);

#endif /* _TERNMEM_H */