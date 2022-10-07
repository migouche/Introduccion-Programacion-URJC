#include <stdio.h>

int main()
{
    int n;
    printf("Numero de numeros >>> ");
    scanf("%d", &n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int m;
        printf("\nIntroduce un numero >>> ");
        scanf("%d", &m);

        total += m;
    }

    printf("\nMedia: %f\n", (float)total / n);
}