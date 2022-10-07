#include <stdio.h>

int main()
{
    int n;
    ask_num: // ALL HAIL GOTO
    printf("Numero de numeros >>> ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("El numero debe ser mayor que 0\n");
        goto ask_num;
    }
    int total = 0;
    int i = 0;
    do
    {
        int m;
        printf("\nIntroduce un numero >>> ");
        scanf("%d", &m);

        total += m;
        i++;
    } while (i < n);

    printf("\nMedia: %f\n", (float)total / n);
}