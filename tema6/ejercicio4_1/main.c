#include "stdio.h"

int main() {
    int n, m;

    printf("Introduce dos numeros >>> ");
    scanf("%d %d", &n, &m);

    int* pn = &n;
    int* pm = &m;

    printf("La resta de direcciones es %p\n", pm - pn);
    return 0;
}