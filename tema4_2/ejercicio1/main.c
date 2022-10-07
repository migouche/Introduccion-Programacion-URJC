#include <stdio.h>

int main()
{
    printf("Numero del 1 al 9 >>> ");
    int base;
    scanf("%d", &base);
    printf("\n");

    for (int i = 0; i < 11; i++)
        printf("%d x %d = %d\n", base, i, base * i);

    return 0;
}