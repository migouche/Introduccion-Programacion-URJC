#include "stdio.h"

int sumaSerie(int n)
{
    if (n <= 1)
        return 1;
    return n + sumaSerie(n -1);
}

int main()
{
    int n;
    printf("Introduce un numero >>> ");
    scanf("%d", &n);
    printf("La suma de la serie es %d\n", sumaSerie(n));
}