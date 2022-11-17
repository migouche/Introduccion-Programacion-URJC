#include "stdio.h"

int imprimirMatriz(int *matriz, int n, int m)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("[");
        for (int j = 0; j < m; j++)
        {
            printf("%d", *(matriz + (i * m) + j));
            if (j != m - 1)
            {
                printf(", ");
            }
        }
        printf("]");
        if (i != n - 1)
        {
            printf(",\n");
        }
    }
    printf("]\n");
}

int main()
{
    int n, m;
    printf("Introduce las dimensiones de la matriz >>> ");
    scanf("%d %d", &n, &m);

    int matriz[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("Introduce el valor de la posicion (%d, %d) >>> ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    imprimirMatriz(matriz, n, m);
}