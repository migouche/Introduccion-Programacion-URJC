#include "stdio.h"

int main()
{

    int t = 0;
    int i = 1;

    do {
        scanf("%d", &i);
        t += i;
    } while (i != 0);

    printf("La suma de los numeros es %d\n", t);
    return 0;
}