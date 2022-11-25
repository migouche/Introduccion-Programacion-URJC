#include "stdio.h"

char toUpperCase(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    return c;
}

int main()
{
    char c;
    printf("Introduce un caracter >>> ");
    scanf("%c", &c);
    printf("El caracter %c en mayusculas es %c\n", c, toUpperCase(c));
    return 0;
}