#include <stdio.h>
#include <stdlib.h>

typedef struct estructura
{
    int a;
    char b;
}eDato;

int main()
{
    eDato d;
    d.a = 5;
    d.b = '<';

    eDato* pDato;
    pDato = &d;

    printf("%d -- %c\n", pDato->a, pDato->b);

    printf("Tam: %d\n", sizeof(eDato));
    printf("%d -- %c\n", d.a, d.b);
    return 0;
}
