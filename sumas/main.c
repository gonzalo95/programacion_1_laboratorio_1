#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    sumar1();
    return 0;
}


void sumar1(void){
    int num1;
    int num2;
    int suma;

    num1 = pedirInt("numero: ", 1000, 1);
    num2 = pedirInt("numero: ", 1000, 1);

    suma = num1 + num2;

    printf("la suma es %d", suma);
}
