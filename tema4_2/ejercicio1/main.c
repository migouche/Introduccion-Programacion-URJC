#include <stdio.h>

int main()
{
    printf("Numero del 1 al 9 >>> ");
    int n;
    scanf("%d", &n);
    printf("\n");

    for (int i = 0; i < 11; i++)
        printf("%d x %d = %d\n", n, i, n * i);

    return 0;
}