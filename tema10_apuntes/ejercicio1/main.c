#include "stdio.h"

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}



int main() {
    int base, exponente;
    printf("Introduce la base >>> ");
    scanf("%d", &base);
    printf("Introduce el exponente >>> ");
    scanf("%d", &exponente);

    FILE *fichero = fopen("potencia.txt", "w");
    if (fichero == NULL) {
        printf("Error al abrir el fichero\n");
        return 1;
    }
    fprintf(fichero, "%d elevado a %d es %d\n", base, exponente, potencia(base, exponente));
    fclose(fichero);
    return 0;
}