#include <stdio.h>
#include <stdlib.h>

void intercambiarConPunteros(int*, int*);
void intercambiar(int, int);
void ponerEnCero(int*);

int main()
{
    int edadUno;
    int edadDos;
    edadUno = 22;
    edadDos = 99;
    ponerEnCero(&edadDos);
    intercambiar(&edadUno, &edadDos);
    printf("\n edad 1: %d", edadUno);
    printf("\n edad 2: %d", edadDos);

    return 0;
}


void intercambiarConPunteros(int *num1, int *num2)
{
    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

void intercambiar(int num1, int num2)
{
    int aux;
    aux = num1;
    num1 = num2;
    num2 = aux;
}

void ponerEnCero(int* num)
{
    *num = 0;
}
