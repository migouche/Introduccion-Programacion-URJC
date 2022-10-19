#include "stdio.h"

int main()
{
    float tiempo, ventas;
    printf("Introduce el tiempo >>> ");
    scanf("%f", &tiempo);
    printf("Introduce las ventas >>> ");
    scanf("%f", &ventas);

    float sueldo;

    if (tiempo < 1)
        sueldo = 75000;
    else if (tiempo < 2)
        sueldo = 100000;
    else
        sueldo = 150000;
    if(ventas < 500000)
        sueldo -= .05 * ventas;
    else if (ventas < 1000000)
        sueldo -= .1 * ventas;
    else
        sueldo -= .15 * ventas;

    printf("Sueldo: %f\n", sueldo);

    return 0;
}