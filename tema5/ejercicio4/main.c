#include "stdio.h"
#define ARR_SIZE 5

int main()
{
    int arr[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("Introduce un numero >>> ");
        int num;
        scanf("%d", &num); //introducimos el scanf en el indice i del array
        arr[i] = num;
    }

    for(int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}