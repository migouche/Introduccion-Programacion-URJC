#include <stdio.h>

int main()
{
    float a, b;

    scanf("%f %f", &a, &b);
    if (b == 0)
        printf("No se puede dividir\n");
    else
        printf("Resultado: %f\n", a / b);
}