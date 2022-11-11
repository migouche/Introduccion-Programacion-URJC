#include "stdio.h"

int main()
{
    int n;

    printf("Introduce el tamano del array >>> ");
    scanf("%d", &n);

    double arr[n];

    double *p1 = &arr[0];
    double *p2 = &arr[1];

    printf("la diferencia de memoria entre p1 y p2 es %d\n", p2 - p1);
}