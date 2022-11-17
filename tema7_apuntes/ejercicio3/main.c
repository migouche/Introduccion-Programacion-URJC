#include "stdio.h"

int comprobarFecha()
{
    int dia, mes, anio;
    printf("Introduce una fecha (dd mm aaaa) >>> ");
    scanf("%d %d %d", &dia, &mes, &anio);

    if (dia < 1 || dia > 31)
    {
        return 0;
    }
    if (mes < 1 || mes > 12)
    {
        return 0;
    }
    if (anio < 0 || anio > 2017)
    {
        return 0;
    }

    return 1;
}

int main()
{
    if (comprobarFecha())
    {
        printf("La fecha es correcta\n");
    }
    else
    {
        printf("La fecha es incorrecta\n");
    }
    return 0;
}