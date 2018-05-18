#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    char buffer[100] = "Esto es un texte dentro del fichero.";
    char bufferIn[100];

// LECTURA

    fp = fopen ("fichero.txt", "r");


    if(fp == NULL)
    {
        printf("\nNo la gedies que ese archivo no existe");
    }
    else
    {
        while(!feof(fp))
        {
            fgets(bufferIn, 100, fp);
            printf("%s\n", bufferIn);
        }

    }

// ESCRITURA
/*
    fp = fopen ("fichero.txt", "w");


    fprintf(fp, buffer);
    fprintf(fp, "%s", "\nEsto es un texto dentro del fichero.");
    fprintf(fp, "\nEsto es otro texto dentro del fichero. Y el buffer");

*/

    fclose(fp);
    system("pause");
    system("cls");

    return 0;
}
