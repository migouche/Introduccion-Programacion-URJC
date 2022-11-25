#include "stdio.h"

int iva(int n, int i)
{
    return n + n * i / 100;
}

int main()
{
    int n, i;
    printf("Introduce un numero y un porcentaje >>> ");
    scanf("%d %d", &n, &i);
    printf("El iva de %d es %d\n", n, iva(n, i));
    return 0;
}