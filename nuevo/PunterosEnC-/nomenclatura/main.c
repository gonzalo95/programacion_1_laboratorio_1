#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Punteros
    int *punteroNumero;
    int numero;
    int numero2;
    numero = 66;
    numero2 = &numero; // Asignacion de memoria

    punteroNumero = &numero;
    //*punteroNumero = &numero;
    //*punteroNumero = 55;
    printf("\na- %d\n", numero2);
    numero2 = *punteroNumero; // Asignacion de valor
    printf("\nb- %d\n", numero2);

    printf(" %d ", numero);
    printf(" %d ", numero2);
    printf(" %d ", &numero);
    printf(" %p ", punteroNumero);
    printf(" %p ", &punteroNumero);
    printf(" %d ", *punteroNumero);
    //printf("%d", *punteroNumero);
    return 0;
}
