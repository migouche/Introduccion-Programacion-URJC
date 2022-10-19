#include "stdio.h"

int main()
{
    int c1, c2, c3, c4, n, b;
    printf("Votos del candidato 1 >>> ");
    scanf("%d", &c1);
    printf("Votos del candidato 2 >>> ");
    scanf("%d", &c2);
    printf("Votos del candidato 3 >>> ");
    scanf("%d", &c3);
    printf("Votos del candidato 4 >>> ");
    scanf("%d", &c4);
    printf("Votos en blanco >>> ");
    scanf("%d", &b);
    printf("Votos nulos >>> ");
    scanf("%d", &n);

    printf("CANDIDATO1 ");
    for(int i = 0; i < c1; i++)
    {
        printf("*");
    }
    printf("\n");

    printf("CANDIDATO2 ");
    for(int i = 0; i < c2; i++)
    {
        printf("*");
    }
    printf("\n");

    printf("CANDIDATO3 ");
    for(int i = 0; i < c3; i++)
    {
        printf("*");
    }
    printf("\n");

    printf("CANDIDATO4 ");
    for(int i = 0; i < c4; i++)
    {
        printf("*");
    }
    printf("\n");

    printf("BLANCOS ");
    for(int i = 0; i < b; i++)
    {
        printf("*");
    }
    printf("\n");

    printf("NULOS ");
    for(int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}