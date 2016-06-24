#ifndef _DOUBLINGARRAY_H
#define _DOUBLINGARRAY_H

typedef struct doublingarray DoubArr;

DoubArr* doubarr_init();

DoubArr* doubarr_init(int size);

/* add to the end of a doubarr */ 
void* doubarr_append(DoubArr* da, void* elem);

/* replaces the element at the specified position with elem */
void* doubarr_replace(DoubArr* da, void* elem, int position);

/* removes the element at the specified position 
void* doubarr_remove(DoubArr* da, int position);*/

/* removes excess memory */
void doubarr_squish(DoubArr* da);

void doubarr_destroy(DoubArr*, void*(*)(void*)freefunc);

#endif /* _DOUBLINGARRAY_H */