#include "stdio.h"
#include "stdlib.h"

int sum_matriz()
{
    int n = 2, m = 2;
    int** matriz = malloc(n * sizeof (int));
    for (int i = 0; i < n; ++i) {
        matriz[i] = malloc(m * sizeof (int));
        for (int j = 0; j < m; ++j) {
            printf("Introduce el elemento (%d, %d) >>> ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    int suma = 0;
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            suma += matriz[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        free(matriz[i]);
    }
    free(matriz);
    return suma;
}

int main()
{
    printf("La suma es %d\n", sum_matriz());
    return 0;
}

