#include "stdio.h"
#include "stdlib.h"

int main()
{
    int filas;
    printf("Introduce el numero de filas >>> ");
    scanf("%d", &filas);

    int** matriz = malloc(filas * sizeof(int*));
    if (matriz == NULL)
    {
        printf("Error al reservar memoria\n");
        return 1;
    }

    int* columnas = malloc(filas * sizeof(int));
    if (columnas == NULL)
    {
        printf("Error al reservar memoria\n");
        return 1;
    }

    int contador = 0;
    int sillas = 0;
    for (int i = 0; i < filas; i++)
    {
        printf("Introduce el numero de sillas de la fila %d >>> ", i + 1);
        scanf("%d", &columnas[i]);
        matriz[i] = malloc(columnas[i] * sizeof(int));
        if (matriz[i] == NULL)
        {
            printf("Error al reservar memoria\n");
            return 1;
        }
        for(int j = 0; j < columnas[i]; j++)
        {
            if (contador % 2 == 0)
            {
                matriz[i][j] = 1;
                sillas++;
            }
            else
            {
                matriz[i][j] = 0;
            }
            //printf("%d ", matriz[i][j]);
            contador++;
        }
        contador = 0;
        //printf("\n");
    }

    for(int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas[i]; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    free(columnas);
    for (int i = 0; i < filas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);


    printf("Hay %d sillas\n", sillas);
}