#include "stdio.h"

int main()
{
    int arr[10];

    int n;
    printf("Introduce el tamano del array >>> ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Introduce el valor de la posicion %d >>> ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}