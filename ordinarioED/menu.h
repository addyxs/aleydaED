#ifndef MENU_H
#define MENU_H

#include <stdio.h>

int menuPrincipal(void){

    int opcion; 
    printf("\nMENÚ");
    printf("\n1) Altas");
    printf("\n2) Bajas");
    printf("\n3) Mostrar"); 
    printf("\n4) Funciones especiales"); 
    printf("\n5) Salir");
    printf("\nSeleccione una opción: ");
    scanf("%d", &opcion); 
    
    return opcion; 
}

int menuAltas(void){

    int opcion;
    printf("\nALTAS");
    printf("\n1) Registrar a una persona");
    printf("\n2) Registrar a varias personas"); 
    printf("\n3) Salir"); 
    printf("\nSeleccione una opción: "); 
    scanf("%d", &opcion);

    return opcion; 
}

int menuCarreras(void){

    int opcion;
    printf("Carrera: "); 
    printf("\n1) Ingienería en desarollo de software"); 
    printf("\n2) Ingeniería forestal"); 
    printf("\n3) Licenciatura en administración turística");
    printf("\n4) Licenciatura en ciencias ambientales"); 
    printf("\n5) Licenciatura en biología");
    printf("\nSeleccione su carrera: ");
    scanf("%d", &opcion);

    return opcion; 
}

int menuBajas(void){

    int opcion;
    printf("\nBAJAS");
    printf("\n1) Dar de baja a una persona");
    printf("\n2) Dar de baja a varias personas");
    printf("\n3) Baja general");
    printf("\n4) Salir");
    printf("\nSeleccione una opcion: ");
    scanf("%d",&opcion);

    return opcion;
}

int menuMostrar(){

    int opcion;
    printf("\nMOSTRAR");
    printf("\n1) Todas las personas");
    printf("\n2) Carrera");
    printf("\n3) Semestre");
    printf("\n4) Carrera y semestre");
    printf("\n5) Nombre");
    printf("\n6) Matricula");
    printf("\n7) Salir");
    printf("\nSeleccione una opcion: ");
    scanf("%d",&opcion);

    return opcion;
}

#endif
