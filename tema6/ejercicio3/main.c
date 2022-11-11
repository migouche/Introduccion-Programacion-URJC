#include "stdio.h"

int main() {
    int numero;
    printf("Introduce un numero >>> ");
    scanf("%d", &numero);

    int* pnumero = &numero;
    int** ppnumero = &pnumero;

    **ppnumero = 10;

    printf("El numero es %d, su primer puntero vale %d, y su segundo puntero vale %d\n", numero, *pnumero, **ppnumero);
    printf("La direccion de memoria de numero es %p, la direccion de memoria de pnumero es %p, y la direccion de memoria de ppnumero es %p\n", &numero, &pnumero, &ppnumero);
    return 0;
}