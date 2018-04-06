#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float pedirFloat(char mensaje[], float max, float min){

    float num;
    printf("%s", mensaje);
    scanf("%f", &num);

    while (num < min || num > max){
        printf("Error. %s", mensaje);
        scanf("%f", &num);
    }

    return num;
}

char pedirChar(char mensaje[], char max, char min){

    char letra;
    printf("%s", mensaje);
    scanf("%c", &letra);

    while (letra < min || letra > max){
        printf("Error. %s", mensaje);
        scanf("%c", &letra);
    }

    return letra;
}

int pedirInt(char mensaje[], int max, int min){

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
