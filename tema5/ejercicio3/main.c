#include "stdio.h"

int main()
{
    int arr[10];

    for(int i = 0; i < 10; i++)
    {
        int e, n;
        printf("Introduce el numero de expediente >>> ");
        scanf("%d", &e);

        printf("Introduce la nota media del alumno >>> ");
        scanf("%d", &n);

        arr[e] = n;
    }

    for(int i = 0; i < 10; i++)
    {
        printf("La nota media del alumno con numero de expediente %d es %d\n", i, arr[i]);
    }
    return 0;
}