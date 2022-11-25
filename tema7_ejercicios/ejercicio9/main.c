#include "stdio.h"
#include "math.h"

float redondear(int n, int r)
{
    return ((int)(n * pow(10, r) + 0.5)) / (float)pow(10, r);
}

int main()
{
    float n;
    int r;
    printf("Introduce un numero y un numero de decimales >>> ");
    scanf("%f %d", &n, &r);
    printf("El numero %f redondeado a %d decimales es %f\n", n, r, redondear(n, r));
    return 0;
}