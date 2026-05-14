#include <stdio.h>

void dato(int *ptr){
    *ptr=8;
    return ptr;
};

int main(void){

    int a;

    dato(&a);
    
    printf("%d \n", a);

    return 0;
}
