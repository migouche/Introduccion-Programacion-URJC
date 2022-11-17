#include "stdio.h"

int numeroEnArray(int* array, int n, int numero)
{
    for (int i = 0; i < n; i++)
    {
        if (*(array + i) == numero)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("Introduce el tamano del array >>> ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Introduce el valor de la posicion %d >>> ", i);
        scanf("%d", &arr[i]);
    }

    int numero;
    printf("Introduce el numero a buscar >>> ");
    scanf("%d", &numero);
    int numeroEncontrado = numeroEnArray(arr, n, numero);
    if (numeroEncontrado != -1)
    {
        printf("El numero %d esta en el array en la posicion %d\n", numero, numeroEncontrado);
    }
    else
    {
        printf("El numero %d no esta en el array\n", numero);
    }
}