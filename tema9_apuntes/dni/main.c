#include "stdio.h"

struct DNI {
    char nombre[100];
    char apellido1[100];
    char apellido2[100];
    char dni[9];
    int dia, mes, ano;
    char nacionalidad[3];
    char sexo;
    char soporte[9];
    int dia_expedicion, mes_expedicion, ano_expedicion;
};

void empty_buffer()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int main()
{
    struct DNI dni;
    printf("Introduce el nombre >>> ");
    scanf("%s", dni.nombre);
    printf("Introduce el primer apellido >>> ");
    scanf("%s", dni.apellido1);
    printf("Introduce el segundo apellido >>> ");
    scanf("%s", dni.apellido2);
    printf("Introduce el DNI >>> ");
    scanf("%s", dni.dni);
    printf("Introduce la fecha de nacimiento (dd/mm/aaaa) >>> ");
    scanf("%d/%d/%d", &dni.dia, &dni.mes, &dni.ano);
    printf("Introduce la nacionalidad >>> ");
    scanf("%s", dni.nacionalidad);
    empty_buffer();
    printf("Introduce el sexo >>> ");
    scanf("%c", &dni.sexo);
    printf("Introduce el soporte >>> ");
    scanf("%s", dni.soporte);
    printf("Introduce la validez (dd/mm/aaaa) >>> ");
    scanf("%d/%d/%d", &dni.dia_expedicion, &dni.mes_expedicion, &dni.ano_expedicion);

    printf("Nombre: %s %s %s DNI: %s Fecha de nacimiento: %d/%d/%d Nacionalidad: %s Sexo: %c Soporte: %s Validez: %d/%d/%d\n", dni.nombre, dni.apellido1, dni.apellido2, dni.dni, dni.dia, dni.mes, dni.ano, dni.nacionalidad, dni.sexo, dni.soporte, dni.dia_expedicion, dni.mes_expedicion, dni.ano_expedicion);

    return 0;
}