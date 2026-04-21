#include <iostream>
int main(void){
    int a,b;              
    int *ptr1=NULL;                  
    int *ptr2=NULL;                  
    int **pptr=NULL;                 
    int A[5]={1,2,3,4,5};       
    ptr1=&a; // ptr1 apunta a a
    ptr2=&b; // ptr2 apunta a b
    ptr1 = 5; // error por que está asignando un valor entero a un apuntador
    cout << ptr; // error por que es una variable no declarada
    *ptr2 = 5; // b = 5
    *ptr1 = *ptr2; // a = 5
    std :: cout << a; // 5
    std :: cout << b; // 5
    pptr = ptr1; // pptr está intentando guardar la dirección de ptr1             
    pptr = &b; // 
    pptr = &ptr2; // pptr apunta a ptr2
    **pptr +=5; // se modifica el valor de la variale, entonces se le suma 5 y b = 10
    std :: cout << pptr; // se imprime la dirección de  ptr2 (0x3FFC)
    std :: cout << *pptr // se imprime la dirección de b (0x3FF4)
    std :: cout << **pptr // 10
    *pptr = ptr1; // ptr2 ahora apunta a a
    **pptr +=10; //se modifica el valor de la variable, entonces se le suman 10 y a = 15
    std :: cout << a; // 15
    std :: cout << b; // 10
    *pptr = ptr2; // ptr2 sigue apuntando a a
    ptr2 = &a; // ptr2 apunta a a
    std :: cout << *ptr1; // 15
    std :: cout << *ptr2+4; // 19
    a = 2; // a = 2
    b = *ptr2 +3; // b = 5
    std :: cout << *pptr; // se imprime la dirección de a (0x3FF0)
    std :: cout << **pptr; // 2
    std :: cout << ptr1; // se imprime la dirección de a (0x3FF0)
    std :: cout << ptr2; // se imprime la dirección de a (0x3FF0)
    **pptr +=1; // a = 3
    std :: cout << *ptr1; // salida: 3
    std :: cout << *ptr2; // salida: 3
    a = 8; // a = 8
    b = 6; // b = 6
    pptr = &ptr1; // pptr apunta a ptr1
    **pptr -=3; // a = 5
    std :: cout << pptr; // se imprime la dirección de ptr1 (0x3FF8)
    std :: cout << *ptr1; // 5
    std :: cout << *ptr2; // 5
    std :: cout << b; // 6
    std :: cout << a; // 5
    std :: cout << **pptr; // 5
    ptr1 = A; // ptr1 apunta al arreglo
    pptr = &ptr1; // pptr apunta a ptr1
    std :: cout << *(*pptr+3); // 4
    std :: cout << *ptr1; // 1
    std :: cout << (ptr1+3); // 0x3F0A
    for(int i=0;i<5;i++)
        *(*pptr+i)=*(*pptr+i)+1; // suma 1 a cada elemento
    std :: cout << *(ptr1+1); // 3
    std :: cout << *(*pptr+2); // 4
    std :: cout << (*pptr+2); // 0x3F08
    std :: cout << (ptr1+4); // 0x3F0E
    return 0;
}
