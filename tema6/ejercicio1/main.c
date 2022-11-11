#include <stdio.h>

int main() {
    int numero;
    printf("Introduce un numero >>> ");
    scanf("%d", &numero);

    int *puntero = &numero;
    *puntero = 10;

    printf("El numero es %d, y su puntero vale %d\n", numero, *puntero);
    return 0;
}