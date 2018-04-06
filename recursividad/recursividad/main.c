#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("numero: ");
    scanf("%d", &numero);
    printf("El factorial es: %d", factorial(numero));
    return 0;
}


/** \brief Calcula el factorial de un numero positivo.
 *
 * \param int numero
 * \return int factorial
 *
 */
int factorial(int numero){

    int total;

    if (numero == 0)
        total = 1;

    total = numero * factorial(numero - 1);

    return total;
}
