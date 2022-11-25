#include "stdio.h"

int divisible(int *arr, int n, int d)
{
    int i = 0;
    int r = 0;
    while (i < n)
    {
        if (arr[i] % d == 0)
        {
            r++;
        }
        i++;
    }
    return r;
}

int main()
{
    int n;
    printf("Introduce el numero de elementos del array >>> ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Introduce el valor del elemento %d >>> ", i);
        scanf("%d", &arr[i]);
    }

    int d;
    printf("Introduce el divisor >>> ");
    scanf("%d", &d);

    printf("Hay %d elementos que son divisibles por %d\n", divisible(arr, n, d), d);
}