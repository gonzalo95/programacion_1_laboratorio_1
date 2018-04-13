#include <stdio.h>
#include <stdlib.h>

int contarPares(int*, int);
int buscarChar(char*, int, char);

int main()
{
    int vector[5] = {5, 2, 9, 6, 5};

    int i;
    int j;
    int aux;

    for(i = 0; i < 4; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(vector[i] > vector[j])
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }


    return 0;
}

int contarPares(int* array, int cantidad)
{
    int contPares = 0;
    int i;

    for(i = 0; i < cantidad; i++)
    {
        if(array[i]%2 == 0) contPares++;
    }
    return contPares;
}

int buscarChar(char* array, int cantidad, char caracter)
{
    int index = -1;
    int i;

    for(i = 0; i < cantidad; i++)
    {
        if(array[i] == caracter)
        {
            index = i;
            break;
        }
    }
    return index;
}
