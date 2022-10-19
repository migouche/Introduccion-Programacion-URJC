#include "stdio.h"
int main()
{
    printf("Introduce el numero de minutos >>> ");
    float m;
    scanf("%f", &m);
    int total = 60;
    for (int i = 0; i < m - 3; i++)
        total += 10;

    printf("Total: %d\n", total);
    return 0;
}