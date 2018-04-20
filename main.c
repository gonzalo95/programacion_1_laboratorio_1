#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int buscarLibre(int[], int);
void mostrarAlumnos(int[], char[][20], int[], int[], float[], int);
float calcularPromedio(int, int);
int cargarAlumno(int[], char[][20], int[], int[], float[], int);
void cargarDatos(int[], char[][20], int[], int[], float[], int, int);

int main()
{
    int legajo[TAM]= {};
    char nombre[TAM][20];
    int nota1[TAM];
    int nota2[TAM];
    float promedio[TAM];
    int opcion;
    int index;
    int i;
    int padronAux;

    do
    {
        printf("1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4.BAJA\n5.ORDENAR (por nombre)\n9. SALIR\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            index=cargarAlumno(legajo, nombre, nota1, nota2, promedio, TAM);
            if(index == -1)
            {
                printf("No hay lugar\n");
            }
            else
            {
                printf("Alumno ingresado\n");
            }
            break;

        case 2:

        mostrarAlumnos(legajo, nombre, nota1, nota2, promedio, TAM);
        break;

        case 3:
            printf("Padron: ");
            scanf("%d", padronAux);
            if (modificarAlumno(legajo, nombre, nota1, nota2, promedio, TAM, padronAux) == -1)
                printf("Padron inexistente");
            else
                printf("Alumno modificado");

            break;

        case 4:
            printf("Padron: ");
            break;

        case 5:
            break;

        case 9:
            opcion = 9;
            break;

        default:
            printf("Opcion invalida\n");
            break;

    }
    }
    while(opcion!=9);




    return 0;
}

int buscarLibre(int legajos[], int tam)
{
    int index=-1;
    int i;
    for(i = 0; i < tam; i++)
    {
        if(legajos[i] == 0)
            {
            index = i;
            break;
            }
    }
    return index;
}

int cargarAlumno(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int index ;
    index = buscarLibre(legajos, tam);
    if(index!=-1)
    {
        cargarDatos(legajos, nombres, nota1, nota2, promedio, tam, index);
    }
    return index;
}


float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio = (float)(nota1+nota2)/2;
    return promedio;
}

void mostrarAlumnos(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(legajos[i]!=0)
            printf("%d %s %d %d %f\n", legajos[i], nombres[i], nota1[i], nota2[i], promedio[i]);
    }
}

void cargarDatos(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam, int index)
{
        printf("Nombre: ");
        fflush(stdin);
        gets(nombres[index]);
        printf("Legajo: ");
        scanf("%d", &legajos[index]);
        printf("1era nota: ");
        scanf("%d", &nota1[index]);
        printf("2da nota: ");
        scanf("%d", &nota2[index]);
        promedio[index] = calcularPromedio(nota1[index], nota2[index]);
}

int modificarAlumno(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam, int id)
{
    int index=-1;
    int i;
    for(i = 0; i < tam; i++)
    {
        if(legajos[i] == id)
            {
            index = i;
            break;
            }
    }
    if(index!=-1)
        cargarDatos(legajos, nombres, nota1, nota2, promedio, tam, index);

    return index;
}

