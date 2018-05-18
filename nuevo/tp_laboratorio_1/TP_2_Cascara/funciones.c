#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"
#define TAM 50

int obtenerEspacioLibre(EPersona *puntero, int len)
{
    int i;
    int index = -1;
    for(i = 0; i < len; i++)
    {
        if((puntero+i)->estado == 0)
        {
            index = i;
            break;
        }
    }
    return index;
}

int buscarPorDni(EPersona *puntero, int dni, int len)
{
    int i;
    int index = -1;
    for(i = 0; i < len; i++)
    {
        if((puntero+i)->dni == dni && (puntero+i)->estado == 1)
        {
            index = i;
            break;
        }
    }
    return index;
}

int pedirEdad(void)
{
    char edad[TAM];
    int validacion = 0;
    do
    {
        printf("Edad: ");
        fflush(stdin);
        gets(edad);
        validacion = esNumerico(edad);
        if(validacion == 0)
            printf("Edad invalida\n");
    }
    while(validacion == 0);
    return atoi(edad);
}

int pedirDni(void)
{
    char dni[TAM];
    int validacion = 0;
    do
    {
        printf("Dni: ");
        fflush(stdin);
        gets(dni);
        validacion = esNumerico(dni);
        if(validacion == 0)
            printf("Dni invalido\n");
    }
    while(validacion == 0);
    return atoi(dni);
}

void pedirNombre(char *cadena)
{
    char nombre[TAM];
    int validacion = 0;
    do
    {
        printf("Nombre: ");
        fflush(stdin);
        gets(nombre);
        validacion = esSoloLetras(nombre);
        if(validacion == 0)
            printf("Nombre invalido\n");
    }
    while(validacion == 0);
    strcpy(cadena, nombre);
}

int esSoloLetras(char *cadena)
{
   int i = 0;
   while(cadena[i] != '\0')
   {
       if((cadena[i] != ' ') && (cadena[i] < 'a' || cadena[i] > 'z') && (cadena[i] < 'A' || cadena[i] > 'Z'))
           return 0;
       i++;
   }
   return 1;
}

int esNumerico(char *cadena)
{
   int i=0;
   while(cadena[i] != '\0')
   {
       if(cadena[i] < '0' || cadena[i] > '9')
           return 0;

       i++;
   }
   return 1;
}

void ordenarPorNombre(EPersona *puntero, int len)
{
    int i;
    int j;
    EPersona *aux;
    EPersona *p1;
    EPersona *p2;


    for(i = 0; i < len - 1; i++)
    {
        for(j = i + 1; j < len; j++)
        {
            if(strcmp((puntero+i)->nombre, (puntero+j)->nombre) < 0)
            {
                p1 = puntero+i;
                p2 = puntero+j;
                aux = p1;
                p1 = p2;
                p2 = aux;
            }
        }
    }
}

void graficar(EPersona* puntero, int len)
{
    int categoria1 = contarUsuarios(puntero, len, 0, 18);
    int categoria2 = contarUsuarios(puntero, len, 19, 35);
    int categoria3 = contarUsuarios(puntero, len, 36, 150);
    int i;
    int mayor = obtenerMayor(categoria1, categoria2, categoria3);
    for(i = mayor; i > 0; i--)
    {
        printf("\n");

        if(categoria1 >= i)
            printf(" *  ");
        else
            printf("    ");

        if(categoria2 >= i)
            printf("  *  ");
        else
            printf("    ");

        if(categoria3 >= i)
            printf("   * ");
        else
            printf("    ");


    }
    printf("\n<18  19-35  >35\n");
}


int contarUsuarios(EPersona* puntero, int len, int min, int max)
{
    int i;
    int contPersonas = 0;
    for(i = 0; i < len; i++)
    {
        if((puntero+i)->edad <= max && (puntero+i)->edad >= min && (puntero+i)->estado == 1)
            contPersonas++;
    }
    return contPersonas;
}

int obtenerMayor(int num1, int num2, int num3)
{
    int mayor;
    if(num1 >= num2 && num1 >= num3)
        mayor = num1;

    if(num2 >= num1 && num2 >= num3)
        mayor = num2;

    if(num3 >= num1 && num3 >= num2)
        mayor = num3;

    return mayor;
}
