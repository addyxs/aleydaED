#ifndef MENU_H
#define MENU_H

#include <stdio.h>

int menuPrincipal(void){
    int opcion;
    printf("\n---MENU---");
    printf("\n1) Altas");
    printf("\n2) Bajas");
    printf("\n3) Mostrar");
    printf("\n4)Salir");
    printf("\n\nSeleccione una opcion: ");
    scanf("%d", &opcion);

    return opcion;
};

int menuAltas(void){
    int opcion;
    printf("\n---ALTAS---");
    printf("\n1) Registrar una persona");
    printf("\n2) Registrar varias personas");
    printf("\n3) Regresar");
    printf("\n\nSeleccione una opcion: ");
    scanf("%d", &opcion);

    return opcion;
};

int menuCarreras(void){
    int opcion;
    printf("\n---CARRERAS---");
    printf("\n1) Ingenieria en Desarrollo de Software");
    printf("\n2) Ingenieria Forestal");
    printf("\n3) Licenciatura en Administracion Turistica");
    printf("\n4) Licenciatura en Ciencias Ambientales");
    printf("\n5) Licenciatura en Biologia");
    printf("\n\nSeleccione una carrera: ");
    scanf("%d", &opcion);

    return opcion;
};

int menuBajas(void){
    int opcion;
    printf("\n---BAJAS---");
    printf("\n1) Eliminar una persona");
    printf("\n2) Eliminar varias personas");
    printf("\n3) Eliminar todas");
    printf("\n4) Regresar");
    printf("\n\nSeleccione una opcion: ");
    scanf("%d", &opcion);

    return opcion;
};

int menuMostrar(void){
    int opcion;
    printf("\n---MOSTRAR---");
    printf("\n1) Mostrar todas las personas");
    printf("\n2) Mostrar por carrera");
    printf("\n3) Mostrar por semestre");
    printf("\n4) Mostrar por carrera y semestre");
    printf("\n5) Buscar por nombre");
    printf("\n6) Buscar por matricula");
    printf("\n7) Regresar");
    printf("\n\nSeleccione una opcion: ");
    scanf("%d", &opcion);

    return opcion;
};

#endif
