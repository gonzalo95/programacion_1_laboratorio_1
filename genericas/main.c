#include <stdio.h>
#include <stdlib.h>

int pedirInt(char[], int, int);
int validar(int, int, int, char[]);

int main()
{
    int legajo = pedirInt("legajo:  ", 10000, 1);
    int edad = pedirInt("edad:  ", 50, 18);
    printf("El legajo es %d y la edad %d", legajo, edad);

    return 0;
}

int pedirInt(char mensaje [], int max, int min){

    int num;

    printf("%s", mensaje);
    scanf("%d", &num);

    num = validar(max, min, num, mensaje);

    return num;
}

int validar(int max, int min, int num, char mensaje[]){

    while(num < min || num > max){
        printf("Error: %s", mensaje);
        scanf("%d", &num);
    }

    return num;
}
