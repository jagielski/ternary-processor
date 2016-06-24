#ifndef _TERNLOGIC_H
#define _TERNLOGIC_H
#ifndef INSTR_CT
#define INSTR_CT 21
#endif

void tern_ana(Tryte*);
void tern_ora(Tryte*);
void tern_xra(Tryte*);
void tern_add(Tryte*);
void tern_adc(Tryte*);
void tern_sub(Tryte*);
void tern_sbb(Tryte*);
void tern_icr(Tryte*);
void tern_dcr(Tryte*);
void tern_ral(Tryte*);
void tern_rar(Tryte*);
void tern_cma(Tryte*);
void tern_addi(Tryte*);
void tern_sui(Tryte*);
void tern_mvia(Tryte*);
void tern_mvib(Tryte*);
void tern_lda(Tryte*);
void tern_movab(Tryte*);
void tern_movba(Tryte*);
void tern_movac(Tryte*);
void tern_movca(Tryte*);

void(*)(void*) tern_instrs[INSTR_CT] = {tern_ana,
tern_ora, tern_xra, tern_add, tern_adc, tern_sub,
tern_sbb, tern_icr, tern_dcr, tern_ral, tern_rar,
tern_cma, tern_addi, tern_mvia, tern_mvib, tern_lda,
tern_movab, tern_movba, tern_movac, tern_movca};


char* tern_instrnames[INSTR_CT] = {"tern_ana",
"tern_ora", "tern_xra", "tern_add", "tern_adc",
"tern_sub", "tern_sbb", "tern_icr", "tern_dcr",
"tern_ral", "tern_rar", "tern_cma", "tern_addi",
"tern_mvia", "tern_mvib", "tern_lda", "tern_movab",
"tern_movba", "tern_movac", "tern_movca"};

typedef enum tern_instrvals = {TERN_ANA,
TERN_ORA, TERN_XRA, TERN_ADD, TERN_ADC, TERN_SUB,
TERN_SBB, TERN_ICR, TERN_DCR, TERN_RAL, TERN_RAR,
TERN_CMA, TERN_ADDI, TERN_MVIA, TERN_MVIB, TERN_LDA,
TERN_MOVAB, TERN_MOVBA, TERN_MOVAC, TERN_MOVCA};

#endif /*_TERNGATES_H*/