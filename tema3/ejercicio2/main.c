#include <stdio.h>
#include <math.h>

int main()
{
    float r, h;
    scanf("%f %f", &r, &h);
    float a = 2 * M_PI * r * h + 2 * M_PI * r * r;
    float v = M_PI * r * r * h;

    printf("Area: %f, Volume: %f\n", a, v);

    return 0;
}