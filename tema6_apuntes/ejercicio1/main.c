#include "stdio.h"

int main()
{
    int n;
    printf("Introduce un numero >>> ");
    scanf("%d", &n);

    int* pn = &n;
    *pn = 3;

    n++;

    printf("*pn apunta al valor: %d\n", *pn);

    return 0;
}