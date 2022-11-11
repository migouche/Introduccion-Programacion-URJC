#include "stdio.h"

int main(){
    int n;
    do {
        printf("Introduce el tamano del array >>> ");
        scanf("%d", &n);

    } while (n <= 0);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Introduce el valor de la posicion %d >>> ", i);
        scanf("%d", &arr[i]);
    }

    int *p = &arr[n-1];
    printf("El array es: [");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", *p);
        p--;
    }
    printf("]");
}