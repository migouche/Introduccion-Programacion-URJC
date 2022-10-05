#include <stdio.h>

int main()
{
    float a, b, c, d, e, f;

    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    float x = (c * e - b * f) / (a * e - b * d);
    float y = (a * f - c * d) / (a * e - b * d);
    printf("x = %f, y = %f\n", x, y);
}