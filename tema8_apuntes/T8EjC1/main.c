#include "stdio.h"
#include "stdlib.h"

int* primerosNaturales(int n){
    int *p = malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        p[i] = i + 1;
    }
    return p;
}

int main()
{
    int n;
    printf("Introduce el numero de elementos del array >>> ");
    scanf("%d", &n);

    int *array = primerosNaturales(n);
    for (int i = 0; i < n; ++i) {
        printf("%d, ", array[i]);
    }
    printf("\n");
    free(array);
    return 0;
}