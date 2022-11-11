#include "stdio.h"

int main()
{
    //cuadrado latino
    int n;
    printf("Introduce un numero >>> ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for(int j = n; j >= 1; j--)
        {
            printf("%d ", 5 - ((i + j - 2) % n + 1));
        }
        printf("\n");
    }
    return 0;
}