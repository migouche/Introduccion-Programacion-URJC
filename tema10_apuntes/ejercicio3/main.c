#include "stdio.h"

int main()
{
    int n;
    printf("Introduce un numero >>> ");
    scanf("%d", &n);

    FILE *fichero = fopen("numero.txt", "wb");
    if (fichero == NULL) {
        printf("Error al abrir el fichero\n");
        return 1;
    }
    fwrite(&n, sizeof(int), 1, fichero);
    fclose(fichero);

    FILE *fichero2 = fopen("numero.txt", "rb");
    if (fichero2 == NULL) {
        printf("Error al abrir el fichero\n");
        return 1;
    }
    int m;
    fread(&m, sizeof(int), 1, fichero2);
    fclose(fichero2);

    printf("El numero es %d\n", m);
    return 0;

}