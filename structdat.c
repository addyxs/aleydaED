#include <stdio.h>

struct dato{
    int d;
    struct dato *ptrsig;
};

// 1. La función crea el nuevo módulo y retorna la direción de memoria.   ptr = crearDato();
// 2. Manda la dirección de la variable ptr e implementa doble apuntador para modificar ptr desde la función. se usa MALLOC 


int menu(){
    int n;

    printf("MENÚ\n");
    printf("1) Crear dato\n");
    printf("2) Mostrar datos\n");
    printf("3) Liberar datos\n");
    printf("4) Salir\n");
    scanf("%d", &n)

};

int main (void){
    int dato *ptr = NULL;
    int op;

    do{
        op = menu();

        switch (op){
            case 1:
                ptr = crearDato();
                break;
            case 2: 
                ptr = mostrarDatos();
                break;
            case 3;
                ptr = liberarDatos();
                break;
            case 4;
                printf("Saliendo...\n");
                break;
                default:
                printf("Opción no válida\n");
        }
    }while (op !=5);

    free(ptr);

    return 0;
}
    


};