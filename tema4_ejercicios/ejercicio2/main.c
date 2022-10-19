#include "stdio.h"

int main()
{
    printf("Introduce la nota >>> ");
    float n;
    scanf("%f", &n);

    char nota = n < 5 ? 'D' : n < 7 ? 'C' : n < 9 ? 'B' : 'A';

    printf("Nota: %c\n", nota);
    return 0;
}