#ifndef _TERNTERM_H
#define _TERNTERM_H

typedef struct trit Trit;

Trit* trit_create(int val);

void trit_update(Trit* t, int val);

void trit_destroy(Trit* t);

char trit_val(Trit* t);
/*typedef struct tritarr TritArr;*/

typedef struct tryte Tryte;

Tryte* tryte_create(int val);

void tryte_update(Tryte* t, int val);

void tryte_destroy(Tryte* t);

char tryte_val(Tryte* t);

/*typedef struct trytearr TryteArr;*/

typedef struct tint Tint;

/*typedef struct tintarr TintArr;*/

typedef struct tlong Tlong;

/*typedef struct tlongarr TlongArr;*/

/*typedef struct tfloat Tfloat;*/

/*typedef struct tfloatarr TfloatArr;*/

#endif /* _TERNTERM_H */