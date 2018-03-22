#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre;
    printf("nombre: ");
    scanf("%c", &nombre);

    float sueldo;
    printf("sueldo: ");
    scanf("%f", &sueldo);

    int aumento;
    printf("porcentaje de aumento: ");
    scanf("%d", &aumento);

    float nuevo = ((sueldo * aumento)/100 + sueldo);

    printf("nombre: %c\nsueldo: %.2f\nnuevo sueldo: %.2f\n", nombre, sueldo, nuevo);

    return 0;
}
