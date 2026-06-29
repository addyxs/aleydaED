#ifndef ALTAS_H
#define ALTAS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "structs.h"
#include "menu.h"


struct Persona *nuevaPersona();
struct Alumno *nuevoAlumno();

int altas(struct Persona **ptr){
    struct Persona *P; 
    struct Alumno *A; 

    int b = 1; 

    P = nuevaPersona();
    if(P == NULL){
        printf("Error, no se pudo crear");
        b = 0; 
    }else{
        A = nuevoAlumno();
        if(A == NULL){
            b = 0;
            free(P);    
    }else{
        P->ptrAlum = A; 
        P->ptrSig = *ptr;
        *ptr = P; 
        }
    
        return b;
    }
}

struct Persona *nuevaPersona(){
    struct Persona *P;
    P = (struct Persona *)malloc(sizeof(struct Persona));
    if(P == NULL)
        return NULL;
    P->nombre = (char *)malloc(50 * sizeof(char));
    if(P->nombre == NULL){
        free(P);
        return NULL;
    }

    printf("\nPERSONA\n");

    printf("Nombre: ");
    scanf("%s", P->nombre);

    printf("Edad: ");
    scanf("%d", &P->edad);

    printf("Genero (M/F): ");
    scanf(" %c", &P->genero);

    printf("Fecha de nacimiento (DD/MM/AAAA): ");
    scanf("%10s", P->fn);

    return P;
}

struct Alumno *nuevoAlumno(){
    struct Alumno *A;

        A = (struct Alumno *)malloc(sizeof(struct Alumno)); 
        if (A == NULL)
            return NULL; 

        printf("\n---DATOS DEL ALUMNO---\n");

    printf("Matricula: ");
    scanf("%10s",A->matricula);
    A->carrera = menuCarreras();
    printf("Semestre: ");
    scanf("%d",&A->semestre);

    switch(A->carrera)
    {
        case 1:
            strcpy(A->correo,"IDS");
            break;

        case 2:
            strcpy(A->correo,"IF");
            break;

        case 3:
            strcpy(A->correo,"LAT");
            break;

        case 4:
            strcpy(A->correo,"LCA");
            break;

        case 5:
            strcpy(A->correo,"LB");
            break;

        default:
            strcpy(A->correo,"AL");
            break;
    }
    strcat(A->correo,A->matricula);

    printf("\nCorreo generado: %s@unsij.edu.mx\n",A->correo);
    printf("\nCalificaciones:\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            A->calif[i][j]=rand()%11;
            printf("%.0f ",A->calif[i][j]);
        }
        printf("\n");
    }

    return A;
}

int altasPersonas(struct Persona **Ptr){

    int cantidad;

    printf("\n¿Cuantas personas registrará?: ");
    scanf("%d", &cantidad);
    for(int i=0; i<cantidad; i++){
        printf("\nPERSONA %d\n", i+1);
        altas(Ptr);
    }

    return 0;
}

#endif
