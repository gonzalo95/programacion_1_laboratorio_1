#include <stdio.h>
#include <stdlib.h>
#include "vectores.h"
#define TAM 5


int main()
{
    int vector[TAM];
    int elemento;
    cargarVector(vector, TAM);
    mostrarVector(vector, TAM);
    printf("\nMaximo: %d", buscarMaximo(vector, TAM));
    printf("\nElemento: ");
    scanf("%d", &elemento);
    printf("\nIndice del elemento %d: %d", elemento, buscarElemento(vector, TAM, elemento));
}



