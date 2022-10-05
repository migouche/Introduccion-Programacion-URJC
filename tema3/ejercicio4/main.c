#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d);

    float dist = sqrt((a - c) * (a - c) + (b - d) * (b - d));

    printf("Distancia: %f\n", dist);
}