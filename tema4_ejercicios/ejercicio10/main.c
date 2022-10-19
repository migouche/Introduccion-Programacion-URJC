#include "stdio.h"
#include "math.h"

int main()
{
    int x;
    printf("Introduce un numero >>> ");
    scanf("%d", &x);

    int n;
    printf("Introduce un numero >>> ");
    scanf("%d", &n);

    int t = 0;

    for (int i = 0; i < n; i++)
    {
        t += (i + 1) * pow(x, i);
    }

    printf("El resultado es %d\n", t);
    return 0;
}