#include "stdio.h"
#include "string.h"

struct Alumno {
    int edad;
    float nota;
    char nombre[20];
};

int main()
{
    int e;
    float n;
    char nombre[20];
    printf("Introduce la edad >>> ");
    scanf("%d", &e);
    printf("Introduce la nota >>> ");
    scanf("%f", &n);
    printf("Introduce el nombre >>> ");
    scanf("%s", nombre);

    struct Alumno alumno = {e, n};
    strcpy(alumno.nombre, nombre);

    FILE *fichero;
    fichero = fopen("alumno.txt", "wb");
    fwrite(&alumno, sizeof(struct Alumno), 1, fichero);
    fclose(fichero);

    FILE *fichero2;
    fichero2 = fopen("alumno.txt", "rb");
    struct Alumno alumno2;
    fread(&alumno2, sizeof(struct Alumno), 1, fichero2);
    fclose(fichero2);

    printf("Edad: %d, Nota: %f, Nombre: %s\n", alumno2.edad, alumno2.nota, alumno2.nombre);
    return 0;

}