#include "stdio.h"

int main()
{
    FILE *fichero = fopen("nums.txt", "r");
    if (fichero == NULL) {
        printf("Error al abrir el fichero\n");
        return 1;
    }
    float num;
    float suma = 0.0f;
    while (fscanf(fichero, "%f", &num) != EOF) {
        suma += num;
    }
    fclose(fichero);
    printf("La suma es %f\n", suma);
    return 0;
}