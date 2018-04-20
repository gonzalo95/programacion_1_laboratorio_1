#include <stdio.h>
#include <stdlib.h>

float calcularPromedio(int, int);
void mostrarAlumno(int*, char[3][30], int*, int*, float*);
int buscarAlumno(int num, int* legajo);

int main()
{
    int legajo[3];
    char nombre[3][30];
    int nota1[3];
    int nota2[3];
    float promedio[3];
    int i;
    int alumno;

    for(i = 0; i < 3; i++)
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
    printf("\n");

    mostrarAlumno(legajo, nombre, nota1, nota2, promedio);

    printf("alumno: ");
    scanf("%d", &alumno);
    printf("posicion: %d", buscarAlumno(alumno, legajo));

    return 0;
}

float calcularPromedio(int nota1, int nota2)
{
    float resultado = (float)(nota1 + nota2)/2;
    return resultado;
}

void mostrarAlumno(int* legajo, char nombre [3][30], int* nota1, int* nota2, float* promedio)
{
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("%d, %s, %d, %d, %.2f\n", legajo[i], nombre[i], nota1[i], nota2[i], promedio[i]);
    }
}

int buscarAlumno(int alumno, int* legajo)
{
    int i;
    int index = -1;
    for(i = 0; i < 3; i++)
    {
        if(legajo[i] == alumno)
        {
            index = i;
            break;
        }
    }
    return index;
}






