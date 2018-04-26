#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 10

float calcularPromedio(int, int);
void mostrarAlumno(int*, char[3][30], int*, int*, float*, int);
int buscarAlumno(int num, int* legajo, int);
void ordenarNombre(char [][30], int, int *, int *, int *);

int main()
{
    int legajo[LEN] = {100, 101, 102, 103};
    char nombre[LEN][30] = {"juan", "ana", "maria", "marcelo"};
    int nota1[LEN] = {1, 2 ,3 ,4};
    int nota2[LEN] = {1, 2 ,3 ,4};
    float promedio[LEN] = {1, 2 ,3 ,4};
    int i;
    int alumno;

    /*
    for(i = 0; i < LEN; i++)
    {
        printf("legajo: ");
        scanf("%d", &legajo[i]);
        fflush(stdin);
        printf("nombre: ");
        gets(nombre[i]);
        printf("nota1: ");
        scanf("%d", &nota1[i]);
        printf("nota2: ");
        scanf("%d", &nota2[i]);
        promedio[i] = calcularPromedio(nota1[i], nota2[i]);
        printf("promedio: %.2f\n", promedio[i]);
    }
    */

    mostrarAlumno(legajo, nombre, nota1, nota2, promedio, LEN);
    printf("\n");
    ordenarNombre(nombre, 4, legajo, nota1, nota2);
    mostrarAlumno(legajo, nombre, nota1, nota2, promedio, 4);

    return 0;
}

float calcularPromedio(int nota1, int nota2)
{
    float resultado = (float)(nota1 + nota2)/2;
    return resultado;
}

void mostrarAlumno(int* legajo, char nombre [3][30], int* nota1, int* nota2, float* promedio, int len)
{
    int i;
    for(i = 0; i < len; i++)
    {
        printf("%d, %s, %d, %d, %.2f\n", legajo[i], nombre[i], nota1[i], nota2[i], promedio[i]);
    }
}

int buscarAlumno(int alumno, int* legajo, int len)
{
    int i;
    int index = -1;
    for(i = 0; i < len; i++)
    {
        if(legajo[i] == alumno)
        {
            index = i;
            break;
        }
    }
    return index;
}

void ordenarNombre(char nombre[][30], int len, int *legajo, int *nota1, int *nota2)
{
    int i;
    int j;
    char aux[30];
    int legajoAux;
    int nota2Aux;
    int nota1Aux;

    for(i = 0; i < len - 1; i++)
    {
        for(j = i + 1; j < len; j++)
        {
            if(stricmp(nombre[i], nombre[j]) > 0)
            {
                strcpy(aux, nombre[i]);
                strcpy(nombre[i], nombre[j]);
                strcpy(nombre[j], aux);
                //break;

                legajoAux = legajo[i];
                legajo[i] = legajo[j];
                legajo[j] = legajoAux;

                nota1Aux = nota1[i];
                nota1[i] = nota1[j];
                nota1[j] = nota1Aux;

                nota2Aux = nota2[i];
                nota2[i] = nota2[j];
                nota2[j] = nota2Aux;
            }
        }
    }
}








