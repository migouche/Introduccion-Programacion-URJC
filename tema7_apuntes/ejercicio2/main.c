#include "stdio.h"

int sumaSerie(int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += n - i;
    }
    return suma;
}

int main()
{
    int n;
    printf("Introduce un numero >>> ");
    scanf("%d", &n);
    printf("La suma de la serie es %d\n", sumaSerie(n));
}