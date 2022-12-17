#include "stdio.h"

int main()
{
    int n;
    printf("Introduce el numero de elementos del array >>> ");
    scanf("%d", &n);

    float array[n];
    for(int i = 0; i < n; i++)
    {
        printf("Introduce el elemento %d >>> ", i);
        scanf("%f", &array[i]);
    }

    FILE *fichero;
    fichero = fopen("array.txt", "wb");
    fwrite(array, sizeof(float), n, fichero);
    fclose(fichero);

    FILE *fichero2;
    fichero2 = fopen("array.txt", "rb");
    fseek(fichero2, 0, SEEK_END);
    int size = ftell(fichero2) / sizeof(float);
    float array2[size];
    fseek(fichero2, 0, SEEK_SET);
    fread(array2, sizeof(float), size, fichero2);
    fclose(fichero2);

    for (int i = 0; i < size; i++) {
        printf("%f, ", array2[i]);
    }
    printf("\n");
    return 0;
}