#ifndef BAJAS_H
#define BAJAS_H

#include <stdio.h>
#include <stdlib.h>
#include "structs.h"

int bajaPersona(struct Persona **ptr);
int bajaPersonas(struct Persona **ptr);
int bajaGeneral(struct Persona **ptr);

int bajaPersona(struct Persona **ptr)
{
    struct Persona *ptraux;
    if(*ptr == NULL){
        printf("\nNo hay personas registradas.\n");
        return 0;
    }
    ptraux = *ptr;
    *ptr = ptraux->ptrSig;
    free(ptraux->nombre);
    free(ptraux->ptrAlum);
    free(ptraux);

    printf("\nSe elimino a la persona.\n");

    return 0;
}

int bajaPersonas(struct Persona **ptr){
    int op = 1;
    if(*ptr == NULL){
        printf("\nNo hay personas registradas");
        return 0;
    }

    while(op == 1){
        bajaPersona(ptr);
        if(*ptr == NULL){
            break;
        }
        printf("\nDesea eliminar otra persona?");
        printf("\n1) Si");
        printf("\n2) No");
        printf("\nSeleccione: ");
        scanf("%d", &op);
    }

    return 0;
}

int bajaGeneral(struct Persona **ptr){
    if(*ptr == NULL){
        printf("\nNo hay personas");
        return 0;
    }
    while(*ptr != NULL){
        bajaPersona(ptr);

    }
    printf("\nTodas las personas fueron eliminadas");

    return 0;
}

#endif
