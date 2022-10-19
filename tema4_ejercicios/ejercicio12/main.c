#include "stdio.h"

int main()
{
    int t = 0;
    int n;
    printf("Introduce un numero >>> ");
    scanf("%d", &n);

    int i = 0;
    while (n >= 0)
    {
        t += n;
        printf("Introduce un numero >>> ");
        scanf("%d", &n);
        ++i;
    }

    printf("La media es %f\n", (float)t / i);

    return 0;
}