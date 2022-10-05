#include <stdio.h>

int main()
{
    float a;
    scanf("%f", &a);

    if (a < 5)
        printf("Suspenso\n");
    else if (a < 7)
        printf("Aprobado\n");
    else if (a < 9)
        printf("Notable\n");
    else if (a < 10)
        printf("Sobresaliente\n");
    else
        printf("Matricula de honor\n");
}