#include "stdio.h"

void ultimaCifra(int n)
{
    switch (n % 10) {
        case 0:
            printf("cero");
            break;
        case 1:
            printf("uno");
            break;
        case 2:
            printf("dos");
            break;
        case 3:
            printf("tres");
            break;
        case 4:
            printf("cuatro");
            break;
        case 5:
            printf("cinco");
            break;
        case 6:
            printf("seis");
            break;
        case 7:
            printf("siete");
            break;
        case 8:
            printf("ocho");
            break;
        case 9:
            printf("nueve");
            break;
    }
}

int main()
{
    int n;
    printf("Introduce un numero >>> ");
    scanf("%d", &n);
    printf("La ultima cifra de %d es ", n);
    ultimaCifra(n);
    printf("\n");
}