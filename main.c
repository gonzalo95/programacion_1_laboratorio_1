#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int buscarLibre(int[], int);
void mostrarAlumnos(int[], char[][20], int[], int[], float[], int);
float calcularPromedio(int, int);
int cargarAlumno(int[], char[][20], int[], int[], float[], int);
void pedirDatos(int[], char[][20], int[], int[], float[], int, int);
int buscarAlumno(int num, int* legajo, int);
void ordenarNombre(char [][20], int , int *, int *, int *, float*);

int main()
{
    int legajo[TAM]= {};
    char nombre[TAM][20];
    int nota1[TAM];
    int nota2[TAM];
    float promedio[TAM];
    int opcion;
    int index;
    int legajoAux;

    do
    {
        printf("1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4.BAJA\n5.ORDENAR (por nombre)\n9. SALIR\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            index = cargarAlumno(legajo, nombre, nota1, nota2, promedio, TAM);

            if(index == -1)
                printf("No hay lugar\n");

            else
                printf("Alumno ingresado\n");

            break;

        case 2:

        mostrarAlumnos(legajo, nombre, nota1, nota2, promedio, TAM);
        break;

        case 3:

            printf("Legajo: ");
            scanf("%d", &legajoAux);
            index = buscarAlumno(legajoAux, legajo, TAM);

            if(index == -1)
                printf("Alumno inexistente\n");
            else
            {
                pedirDatos(legajo, nombre, nota1, nota2, promedio, TAM, index);
                printf("Alumno modificado\n");
            }

            break;

        case 4:

            printf("Padron: ");
            scanf("%d", &legajoAux);
            index = buscarAlumno(legajoAux, legajo, TAM);

            if(index == -1)
                printf("Alumno inexistente\n");
            else
            {
                legajo[index] = 0;
                printf("Registro borrado\n");
            }

            break;

        case 5:

            ordenarNombre(nombre, TAM, legajo, nota1, nota2, promedio);
            mostrarAlumnos(legajo, nombre, nota1, nota2, promedio, TAM);

            break;

        case 9:
            opcion = 9;
            printf("Programa finalizado");
            break;

        default:
            printf("Opcion invalida\n");
            break;

        }
    }
    while(opcion != 9);
    return 0;
}

int buscarLibre(int legajo[], int tam)
{
    int index = -1;
    int i;
    for(i = 0; i < tam; i++)
    {
        if(legajo[i] == 0)
            {
            index = i;
            break;
            }
    }
    return index;
}

int cargarAlumno(int legajo[], char nombre[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int index ;
    index = buscarLibre(legajo, tam);

    if(index != -1)
        pedirDatos(legajo, nombre, nota1, nota2, promedio, tam, index);

    return index;
}


float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio = (float)(nota1 + nota2) / 2;
    return promedio;
}

void mostrarAlumnos(int legajo[], char nombre[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        if(legajo[i] != 0)
            printf("Legajo: %d\n Nombre: %s\n 1er nota: %d\n 2da nota: %d\n Promedio: %f\n", legajo[i], nombre[i], nota1[i], nota2[i], promedio[i]);
    }
}

void pedirDatos(int legajo[], char nombre[][20], int nota1[], int nota2[], float promedio[], int tam, int index)
{
    printf("Nombre: ");
    fflush(stdin);
    gets(nombre[index]);
    printf("Legajo: ");
    scanf("%d", &legajo[index]);
    printf("1era nota: ");
    scanf("%d", &nota1[index]);
    printf("2da nota: ");
    scanf("%d", &nota2[index]);
    promedio[index] = calcularPromedio(nota1[index], nota2[index]);
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

void ordenarNombre(char nombre[][20], int len, int *legajo, int *nota1, int *nota2, float *promedio)
{
    int i;
    int j;
    char aux[20];
    int legajoAux;
    int nota2Aux;
    int nota1Aux;
    float promedioAux;

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

                promedioAux = promedio[i];
                promedio[i] = promedio[j];
                promedio[j] = promedioAux;
            }
        }
    }
}



