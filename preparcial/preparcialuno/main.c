#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char calle[50];
    int numero;
    char localidad[50];
    int piso;
    char dpto;
    int cp;
}eDomicilio;

typedef struct
{
    int legajo;
    char nombre[50];
    eDomicilio domicilio;


}eAlumno;

typedef struct
{
    int legajo;
    char nombre[50];
    eDomicilio domicilio;

}eProfesor;



int main()
{
    eAlumno miAlumno;
    miAlumno.legajo = 400;
    miAlumno.domicilio.cp = 1870;

    printf("legajo: %d, -- codigo postal: %d.", miAlumno.legajo, miAlumno.domicilio.cp);

    return 0;
}
