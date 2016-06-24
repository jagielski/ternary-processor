#ifndef _TERNPROC_H
#define _TERNPROC_H
#include "ternlogic.h"
#include "ternmem.h"
#include "terninstr.h"
#include "ternterm.h"

typedef struct ternproc TernProc;

TernProc* ternproc_init();

void ternproc_step(TernProc*);

void ternproc_destroy(TernProc*);

#endif /* _TERNPROC_H */