#include "stdio.h"

int main()
{
    int n;
    printf("Introduce un numero >>> ");
    int t = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        t += i;
    }

    printf("La suma de los %d primeros numeros es %d\n", n, t);

    return 0;
}