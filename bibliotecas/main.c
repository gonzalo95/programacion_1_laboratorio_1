#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int num = pedirInt("numero: ", 1000, 1);
    printf("El numero es: %d", num);
    return 0;
}


