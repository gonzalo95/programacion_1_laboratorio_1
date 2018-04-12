#include <stdio.h>
#include <stdlib.h>
#include "vectores.h"

int buscarMaximo(int* vector, int fin)
{
    int i;
    int max;
    int flag = 0;
    for(i = 0; i < fin; i++)
    {
        if (!flag || vector[i] > max)
        {
            max = vector[i];
            flag = 1;
        }
    }
    return max;
}

void mostrarVector(int* vector, int max)
{
    int i;
    printf("Array: ");
    for(i = 0; i < max; i++)
    {
        printf("%d ", vector[i]);
    }
}

void cargarVector(int* vector, int max)
{
    int i;
    for(i = 0; i < max; i++)
    {
        printf("ingrese el %d elemento: ", i + 1);
        scanf("%d", &vector[i]);
    }
}

int buscarElemento(int* vector, int max, int elemento)
{
    int i;
    int indice = -1;
    for(i = 0; i < max; i++)
    {
        if (vector[i] == elemento) indice = i;
    }
    return indice;
}
