#include "stdio.h"

int fib(int n)
{
    if (n == 1)
        return 0;
    else if (n < 3)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    printf("Introduce un numero >>> ");
    scanf("%d", &n);

    printf("El resultado es %d\n", fib(n));

    return 0;
}