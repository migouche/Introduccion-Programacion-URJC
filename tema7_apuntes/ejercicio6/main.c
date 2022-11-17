#include "stdio.h"

int factorial(int n)
{
    if (n < 2)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Introduce un numero >>> ");
    scanf("%d", &n);
    printf("El factorial de %d es %d\n", n, factorial(n));
    return 0;
}