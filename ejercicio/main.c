#include <stdio.h>
#include <stdlib.h>

/**
* Se ingresan numeros (distintos de cero), no sabemos cuantos.
* Se pide mostrar:
*   Cantidad de pares e impares
*   Porcentaje de positivos y negativos
*   Maximo y minimo
*   Maximo numero par
*   Cantidad de numero entre 125 y 236
*/

int main()
{
    int num, maxPar, cantPares, cantImpares, sumaPar, sumaImpar, cantEntre, max, min;

    printf("Ingrese los numero (cero para salir)\n");
    scanf("%d", &num);

    cantPares = 0;
    cantImpares = 0;
    sumaImpar = 0;
    sumaPar = 0;
    cantEntre = 0;

    while (num != 0)
    {
        if (cantPares == 0 && cantImpares == 0){
            max = num;
            min = num;
        }
        if (num > max) max = num;
        if (num < min) min = num;

        if(num > 125 && num < 236) cantEntre ++;

        if (num%2 == 0){
            cantPares++;
            sumaPar += num;
            if (cantPares == 0) maxPar = num;
            else if(num > maxPar) maxPar = num;
        }

        else{
            cantImpares++;
            sumaImpar += num;
        }

        scanf("%d", &num);
    }

    printf("%d --- %d --- %d --- %d --- %d --- %d --- %d --- %d", cantPares, cantImpares, sumaPar / cantPares, sumaImpar / cantImpares, cantEntre, max, min, maxPar);

    return 0;
}
