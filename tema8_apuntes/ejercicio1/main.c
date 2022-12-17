#include <stdio.h>
#include <stdlib.h>

int* scan()
{
    int *p = malloc(sizeof(int));

    printf("Introduce un numero >>> ");
    scanf("%d", p);
    return p;
}

int main()
{
    int *p = scan();

    if (p == NULL) {
        printf("Error al reservar memoria\n");
        return 1;
    }
    printf("El numero es %d\n", *p);
    free(p);
    return 0;
}