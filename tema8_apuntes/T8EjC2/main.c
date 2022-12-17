#include "stdio.h"
#include "stdlib.h"

int sum(int *array, int n) {
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        suma += array[i];
    }
    return suma;
}

int main()
{
    int n;
    printf("Introduce el numero de elementos del array >>> ");
    scanf("%d", &n);

    int *array = malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        printf("Introduce el elemento %d >>> ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("La suma es %d\n", sum(array, n));
    free(array);
    return 0;
}