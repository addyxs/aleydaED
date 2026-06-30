#ifndef STRUCTS_H
#define STRUCTS_H

struct Alumno{
    char matricula[11];
    int carrera;
    int semestre;
    char correo[30];
    float calif[5][5];
};

struct Persona{
    char *nombre;
    int edad;
    char genero;
    char fn[11];
    struct Alumno *ptrAlum;
    struct Persona *ptrSig;
};

#endif
