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
    int num, maxPar, cantPares, cantImpares, cantEntre, max, min, cantPos, cantNeg, cantTotal;

    printf("Ingrese un numero \n");
    scanf("%d", &num);

    cantPares = 0;
    cantImpares = 0;
    cantEntre = 0;
    cantPos = 0;
    cantNeg = 0;
    cantTotal = 0;

    while (num != 0)
    {
        cantTotal++;

        if (cantPares == 0 && cantImpares == 0){
            max = num;
            min = num;
        }
        if (num > max) max = num;
        if (num < min) min = num;

        if(num > 125 && num < 236) cantEntre ++;

        if (num%2 == 0){
            cantPares++;
            if (cantPares == 0) maxPar = num;
            else if(num > maxPar) maxPar = num;
        }

        else{
            cantImpares++;
        }

        if (num < 0) cantNeg++;

        else cantPos++;


        scanf("%d", &num);
    }

    printf("%d --- %d --- %d --- %d --- %d --- %d --- %d --- %d", cantPares, cantImpares, (cantPos * 100) / cantTotal, (cantNeg * 100) / cantTotal, cantEntre, max, min, maxPar);

    return 0;
}
