#include <stdio.h>
#include <stdlib.h>

void mostrar(int *puntero, int cantidad);

int main()
{
    int numeros[3];
    int *puntero;
    int aux = 333;
    puntero = numeros;
    numeros[0] = 9;
    numeros[1] = 99;
    numeros[2] = 999;
    printf("\nNumero: %d", *(puntero-1000));
    printf("\nNumero: %d", *(puntero+1));
    printf("\nNumero: %d", *(puntero+2));
    printf("\nNumero: %d", *(puntero+3));
    printf("\nNumero: %d", *(puntero+4));


    mostrar(numeros, 3);

    return 0;
}

void mostrar(int *puntero, int cantidad)
{
    int i;
    for(i = 0; i < cantidad; i++)
    {
        printf("\nNumero: %d", *(puntero + i));
    }
}
