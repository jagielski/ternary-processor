#include "doublingarray.h"

struct doublingarray{
    void** array;
    int length;
    int elemct;
};

DoubArr* doubarr_init(){
    return doubarr_init(15);
}

DoubArr* doubarr_init(int size){
	void** arr;
    DoubArr* da = (DoubArr*)calloc(sizeof(DoubArr));
    if(da!=NULL){
        arr = (void**)malloc(size,sizeof(void*));
        if(arr==NULL){
            free(da);
            da = NULL;
            return da;
        }
        da->array = arr;
        da->length = size;
        da->elemct = 0;
    }
    return da;
}

void doubarr_append(DoubArr* da, void* elem){
    if(length == elemct){
        da->length *= 2;
        da->array = (void**)realloc((void*)da->array, sizeof(void*)*(da->length));
        if(da->array = NULL)
            return;
    }
    
    da->array[elemct++] = elem;
}

void doubarr_replace(DoubArr* da, void* elem, int position){
    if(position < 0 || position >= da->elemct)
        return;
    da->array[position] = elem;
}

void doubarr_squish(DoubArr* da){
    if(da->length > da->elemct){
        da->array = (void**)realloc((void*)da->array,sizeof(void*)*(da->elemct));
        da->length = elemct;
    }
}

void doubarr_destroy(DoubArr* da, void(*freefunc)(void*)){
    int i;
    for(i=0;i<da->elemct;i++){
        freefunc(da->array[i]);
    }
    free(da->array);
    free(da);
}
