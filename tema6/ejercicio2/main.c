#include <stdio.h>

int main() {
    float a = 5.0;

    float* puntero = &a;

    printf("La direccion en memoria de a es %p\n", puntero);

    printf("El valor de la siguiente memoria es %f\n", *(puntero + 1));

    return 0;
}