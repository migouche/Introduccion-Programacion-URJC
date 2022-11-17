#include "stdio.h"

float areaTriangulo(float base, float altura) {
    return base * altura / 2;
}

int main() {
    float base, altura;
    printf("Introduce la base y la altura  >>> ");
    scanf("%f %f", &base, &altura);
    printf("El area del triangulo es %f\n", areaTriangulo(base, altura));

    return 0;
}