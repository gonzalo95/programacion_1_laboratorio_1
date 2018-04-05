#include <stdio.h>
#include <stdlib.h>

int mostrar_incrementar(int);

int main()
{
    int num;
    printf("Numero: ");
    scanf("%d", &num);
    num = mostrar_incrementar(num);
    printf("\nNumero + 1 :   %d", num);
    return 0;
}

int mostrar_incrementar(int numero){
    printf("jugale al %d en la quiniela", numero);
    return numero + 1;
}
