#include "stdio.h"

int main()
{
    //triangulo de floyd
    int n;
    printf("Introduce un numero >>> ");
    scanf("%d", &n);

    int i = 1;
    int j = 1;
    int k = 1;
    while (i <= n)
    {
        while (j <= i)
        {
            printf("%d ", k);
            j++;
            k++;
        }
        printf("\n");
        i++;
        j = 1;
    }

    return 0;
}