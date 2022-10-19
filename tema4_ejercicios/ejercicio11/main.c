#include "stdio.h"

int main()
{
    int b, n;
    printf("Introduce la base >>> ");
    scanf("%d", &b);
    printf("Introduce el exponente >>> ");
    scanf("%d", &n);

    int t = 1;
    for(int i = 0; i < n; i++)
    {
        t *= b;
    }

    printf("El resultado es %d\n", t);

    return 0;
}