#include <stdio.h>

int main()
{
    printf("Introduce un numero >>> ");
    int n;
    int total = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        printf("Introduce un numero >>> ");
        total += n;

        scanf("%d", &n);
    }

    printf("Total: %d\n", total);
}