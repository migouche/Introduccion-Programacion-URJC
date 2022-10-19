#include "stdio.h"

// comprobar si es capicua

int main()
{
    int n;
    printf("Introduce un numero >>> ");
    scanf("%d", &n);

    int t = 0;
    int m = n;
    while (m > 0)
    {
        t = t * 10 + m % 10;
        m /= 10;
    }

    if (t == n)
        printf("%d es capicua\n", n);
    else
        printf("%d no es capicua\n", n);
}