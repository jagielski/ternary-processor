#include "ternterm.h"

struct trit{ /*0,1,2*/
    char value;
};

struct tryte{ /* between 0 and 80 */
    char value;
};

struct tint{ /* between -1162261467 and 1162261467 */
    Trit* sign;
    Tryte* value[4];
};

struct tlong{ /* between -4052555153018976267 and 4052555153018976267 */
    Trit* sign;
    Tryte* value[8];
};

Trit* trit_create(int val){
    Trit* t; char newval;
    if(val<0)
        newval = (val%3)+3;
    else
        newval = val%3;
    t = (Trit*)malloc(sizeof(Trit));
    if(t!=NULL)
        t->value=(char)val;
    return t;
}

void trit_update(Trit* t, int val){
    char newval;
    if(t==NULL)
        return;
    if(val<0)
        newval = (val%3)+3; // "overflow"
    else
        newval = val%3;
    t->value = newval;
}

void trit_destroy(Trit* t){
    free(t);
}

char trit_val(Trit* t){
    return t->val;
}


Tryte* tryte_create(int val){
    Tryte* t;
    if(val<0)
        newval = (val%81)+81; // "overflow"
    else
        newval = val%81;
    t = (Tryte*)malloc(sizeof(Tryte));
    if(t!=NULL)
        t->value=(char)val;
    return t;
}

void tryte_update(Tryte* t, int val){
    char newval;
    if(t==NULL)
        return;
    if(val<0)
        newval = (val%81)+81; // "overflow"
    else
        newval = val%81;
    t->value = newval;
}

void tryte_destroy(Tryte* t){
    free(t);
}

char tryte_val(Tryte* t){
    return t->val;
}

/*
Tint* tint_create(int val){
    Tint* t; Tryte** trytes;
    char sign, i;
    if(val<-1162261467 || val>1162261467)
        return NULL;
    if(val==0)
        sign=0;
    else{
        if(val>0)
            sign=1;
        else{
            sign=2; val = -val;
        }
    }
    for(i=0;i<31;i++){
        value[i]=val%256;
        val=val/256;
    }
    t = (Tint*)malloc(sizeof(Tint));
    if(t!=NULL){
        t->value=value;
        t->sign = sign;
    }
    return t;
}

Tlong* tlong_create(int val){
    Tlong* t; Tryte* trytes;
    if(val<-4052555153018976267 || val>4052555153018976267)
        return NULL;
    if(val==0)
        sign=0;
    else{
        if(val>0)
            sign=1;
        else{
            sign=2; val = - val;
        }
    }
    for(i=0;i<40;i++){
        value[i]=val%243;
        val=val/243;
    }
    t = (Tlong*)malloc(sizeof(Tlong));
    if(t!=NULL){
        t->value=value;
        t->sign = sign;
    }
    return t;
}

*/