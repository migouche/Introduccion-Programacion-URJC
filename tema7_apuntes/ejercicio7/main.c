#include "stdio.h"

int sumaLenta(int n, int m)
{
    if (n == 0)
        return m;
    if (m == 0)
        return n;
    return sumaLenta(n-1, m+1);
}

int main()
{
    int n, m;
    printf("Introduce dos numero >>> ");
    scanf("%d %d", &n, &m);
    printf("La suma de %d y %d es %d\n", n, m, sumaLenta(n, m));
    return 0;
}