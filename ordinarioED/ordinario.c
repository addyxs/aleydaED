#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "structs.h"
#include "menu.h"
#include "altas.h"
#include "bajas.h"
#include "mostrar.h"
    

int main(void){
    srand(time(NULL));
    int opcion;
    struct Persona *ptr = NULL;
    
    do{
        opcion = menuPrincipal();
        switch (opcion){
            case 1:
            switch (menuAltas()){
                case 1:
                    altas(&ptr);
                    break;
                case 2:
                    altasPersonas(&ptr);
                    break;
            }
        break;
            case 2:
            switch (menuBajas()){
                case 1:
                    bajaPersona(&ptr);
                    break;
                case 2: 
                    bajaPersonas(&ptr);
                    break;
                case 3:
                    bajaGeneral(&ptr);
                    break;
            }
        break;
            case 3:
            switch(menuMostrar()){
                case 1:
                    mostrarTodos(ptr);
                    break;
                case 2:
                    mostrarCarrera(ptr);
                    break;
                case 3:
                    mostrarSemestre(ptr);
                    break;
                case 4:
                    mostrarCarrerasemestre(ptr);
                    break; 
                case 5:
                    mostrarNombre(ptr);
                    break;
                case 6: 
                    mostrarMatricula(ptr);
                    break; 
                }
            break; 
        case 4: 
            break; 
        case 5:
            break; 
        default:
            break;
        }
    }while(opcion!=5);

    return 0;
}
