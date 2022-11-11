#include "stdio.h"

int main()
{
    int n, m;
    printf("Introduce las dimensiones de la matriz >>> ");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Introduce el valor de la posicion (%d, %d) >>> ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int x, y;
    printf("Introduce la posicion a buscar >>> ");
    scanf("%d %d", &x, &y);

    int *pm = &arr[0][0];

    printf("El valor de la posicion (%d, %d) es %d\n", x, y, *(pm + (x * m) + y));

    return 0;
}