#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *nombre = "Minombre";
    char *apellido = "Miapellido";
    char *puntero;
    puntero = nombre;
    printf("%s", puntero);
    printf("\n%s", apellido);
    int i;
    for(i = 0; *(apellido + i) != '\0'; i++)
    {
        printf("\n%c", *(apellido + i));
    }
    return 0;
}
