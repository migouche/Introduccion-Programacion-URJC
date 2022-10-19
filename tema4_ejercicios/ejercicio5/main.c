#include "stdio.h"
#include <math.h>

int main()
{
    int n;
    printf("Introduce un numero >>> ");
    scanf("%d", &n);

    float s = sqrt(n);

    if (s == (int)s)
        printf("%d es un cuadrado perfecto\n", n);
    else
        printf("%d no es un cuadrado perfecto\n", n);

    return 0;
}