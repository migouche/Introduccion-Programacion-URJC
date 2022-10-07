#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    int max;
    if (a > b)
        max = a;
    else
        max = b;

    if (c > max)
        max = c;

    printf("Maximo: %d\n", max);

}