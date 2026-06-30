#ifndef MOSTRAR_H
#define MOSTRAR_H

#include <stdio.h>
#include <string.h>
#include "structs.h"


void mostrarTodos(struct Persona *ptr);
void mostrarCarrera(struct Persona *ptr);
void mostrarSemestre(struct Persona *ptr);
void mostrarCarrerasemestre(struct Persona *ptr);
void mostrarNombre(struct Persona *ptr);
void mostrarMatricula(struct Persona *ptr);


void mostrarTodos(struct Persona *ptr)
{
    if(ptr == NULL)
    {
        printf("\nNo hay personas registradas.\n");
        return;
    }

    while(ptr != NULL)
    {
        printf("\nNombre: %s", ptr->nombre);
        printf("\nEdad: %d", ptr->edad);
        printf("\nGenero: %c", ptr->genero);
        printf("\nFecha: %s", ptr->fn);

        printf("\nMatricula: %s", ptr->ptrAlum->matricula);
        printf("\nCarrera: %d", ptr->ptrAlum->carrera);
        printf("\nSemestre: %d", ptr->ptrAlum->semestre);
        printf("\nCorreo: %s@unsij.edu.mx", ptr->ptrAlum->correo);

        printf("\n-------------------------");

        ptr = ptr->ptrSig;
    }
}


void mostrarCarrera(struct Persona *ptr)
{
    int carrera;

    printf("\nCarrera: ");
    scanf("%d",&carrera);

    while(ptr != NULL)
    {
        if(ptr->ptrAlum->carrera == carrera)
        {
            printf("\n%s", ptr->nombre);
            printf("\nMatricula: %s\n", ptr->ptrAlum->matricula);
        }

        ptr = ptr->ptrSig;
    }
}


void mostrarSemestre(struct Persona *ptr)
{
    int semestre;

    printf("\nSemestre: ");
    scanf("%d",&semestre);

    while(ptr != NULL)
    {
        if(ptr->ptrAlum->semestre == semestre)
        {
            printf("\n%s", ptr->nombre);
            printf("\nMatricula: %s\n", ptr->ptrAlum->matricula);
        }

        ptr = ptr->ptrSig;
    }
}


void mostrarCarrerasemestre(struct Persona *ptr)
{
    int carrera;
    int semestre;

    printf("\nCarrera: ");
    scanf("%d",&carrera);

    printf("Semestre: ");
    scanf("%d",&semestre);

    while(ptr != NULL)
    {
        if(ptr->ptrAlum->carrera == carrera &&
           ptr->ptrAlum->semestre == semestre)
        {
            printf("\n%s", ptr->nombre);
            printf("\nMatricula: %s\n", ptr->ptrAlum->matricula);
        }

        ptr = ptr->ptrSig;
    }
}


void mostrarNombre(struct Persona *ptr)
{
    char nombre[50];

    printf("\nNombre: ");
    scanf(" %s", nombre);

    while(ptr != NULL)
    {
        if(strcmp(ptr->nombre, nombre) == 0)
        {
            printf("\nNombre: %s", ptr->nombre);
            printf("\nMatricula: %s", ptr->ptrAlum->matricula);
            printf("\nCarrera: %d", ptr->ptrAlum->carrera);
            printf("\nSemestre: %d\n", ptr->ptrAlum->semestre);

            return;
        }

        ptr = ptr->ptrSig;
    }

    printf("\nPersona no encontrada.\n");
}


void mostrarMatricula(struct Persona *ptr)
{
    char matricula[11];

    printf("\nMatricula: ");
    scanf("%10s", matricula);

    while(ptr != NULL)
    {
        if(strcmp(ptr->ptrAlum->matricula, matricula) == 0)
        {
            printf("\nNombre: %s", ptr->nombre);
            printf("\nEdad: %d", ptr->edad);
            printf("\nGenero: %c", ptr->genero);
            printf("\nFecha: %s", ptr->fn);
            printf("\nCarrera: %d", ptr->ptrAlum->carrera);
            printf("\nSemestre: %d", ptr->ptrAlum->semestre);
            printf("\nCorreo: %s@unsij.edu.mx\n", ptr->ptrAlum->correo);

            return;
        }

        ptr = ptr->ptrSig;
    }

    printf("\nMatricula no encontrada.\n");
}

#endif
