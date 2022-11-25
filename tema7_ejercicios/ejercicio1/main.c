#include "stdio.h"

float inverso(float n)
{
    if (n == 0)
        return 0;
    return 1 / n;
}

int main()
{
    float n;
    printf("Introduce un numero >>> ");
    scanf("%f", &n);

    printf("El inverso de %f es 1/%f = %f\n", n, n, inverso(n));
}