#include <stdio.h>
#include <math.h>

int main() {
    printf("Escribe las longitudes de los catetos\n");
    float a, b;
    scanf("%f %f", &a, &b);
    float h = sqrt(a*a + b*b);
    printf("La hipotenusa es %2.2f\n", h);
    float angA = asin(a/h) * 180 / M_PI;
    float angB = 90 - angA;
    printf("Los angulos son %2.2f y %2.2f", angA, angB);

    return 0;
}
