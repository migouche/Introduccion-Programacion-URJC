#include "stdio.h"

int main()
{
    char dia;
    printf("Introduce el dia de la semana >>> ");
    scanf("%c", &dia);

    switch (dia)
    {
        case 'L':
            printf("Lunes\n");
            break;
        case 'M':
            printf("Martes\n");
            break;
        case 'X':
            printf("Miercoles\n");
            break;
        case 'J':
            printf("Jueves\n");
            break;
        case 'V':
            printf("Viernes\n");
            break;
        case 'S':
            printf("Sabado\n");
            break;
        case 'D':
            printf("Domingo\n");
            break;
        default:
            printf("Dia incorrecto\n");
            break;
    }
    return 0;
}