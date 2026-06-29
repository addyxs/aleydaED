#ifndef ALTAS_H
#define ALTAS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "menu.h"
#include "structs.h"


struct Persona *nuevaPersona();
struct Alumno *nuevoAlumno();

int altas(struct Persona **ptr){
    struct Persona *P = NULL; 
    struct Alumno *A = NULL; 

    int b = 1; 

    P = nuevaPersona();
    if(P == NULL){
        printf("Error, no se pudo crear :(");
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
        if (P == NULL){
            return NULL; 
        }
        P->nombre = malloc(50 * sizeof(char));
        
        if(P->nombre == NULL){
            free(P);
            return NULL;
        }

        printf("\nPERSONA\n"); 
        printf("Nombre: ");
        scanf(" ");
        fgets(P -> nombre, 50, stdin); 
        printf("Edad: ");
        scanf("%d", &P->edad); 
        printf("Género: ");
        scanf(" %c", &P->genero);
        printf("Fecha de nacimiento[DD/MM/AAAA]: ");
        scanf("%10s", P->fn); 

        return P;
} 

struct Alumno *nuevoAlumno(){
    struct Alumno *A;

        A = (struct Alumno *)malloc(sizeof(struct Alumno)); 
        if (A == NULL)
            return NULL; 

        printf("\nALUMNO\n");
        printf("Matricula: "); 
        scanf("%s", A->matricula);
        
        A->carrera = menuCarreras();
        switch(A->carrera){
            case 1:
                strcpy(A->correo, "CA");
                break;
            case 2:
                strcpy(A->correo, "IF");
                break;
            case 3:
                strcpy(A->correo, "IDSSI");
                break;
            case 4:
                strcpy(A->correo, "LB");
                break;
            case 5:
                strcpy(A->correo, "LAT");
                break;
            }
            for(int i=0; i<4; i++){
                A->correo[i+2] = A->matricula[i];
            }
            for(int i=0; i<4; i++){
                A->correo[i+6] = A->matricula[i+6];
            }
                A->correo[10] = '\0';
                printf("Correo generado: %s@unsij.edu.mx\n", A->correo);
       
        printf("Calificaciones: \n");
            for(int i=0; i<5; i++){
                for(int j=0; j<5; j++){
                    A->calif[i][j] = rand()%11;
                    printf("%.0f ", A->calif[i][j]);
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
