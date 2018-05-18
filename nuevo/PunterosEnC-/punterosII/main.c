#include <stdio.h>
#include <stdlib.h>

int cargarArray(int *, int);
int imprimirArray(int *, int);

int main()
{
    int vector[3];
    int *puntero;
    puntero = vector;

    if(cargarArray(vector, 3))
        printf("Carga exitosa\n");
    else
        printf("La bardiaste lince\n");

    if(!imprimirArray(vector, 3))
        printf("La bardiaste lince\n");

    return 0;
}

int cargarArray(int *puntero, int len)
{
    int retorno = 0;
    if(puntero != NULL)
    {
        retorno = 1;
        int i;
        for(i = 0; i < len; i++)
        {
            printf("\nNumero: ");
            scanf("%d", puntero + i);
        }
    }


    return retorno;
}

int imprimirArray(int *puntero, int len)
{
    int retorno = 0;
    if(puntero != NULL)
    {
        retorno = 1;
        int i;
        for(i = 0; i < len; i++)
        {
            printf("%d\n", *(puntero + i));
        }
    }
    return retorno;
}
