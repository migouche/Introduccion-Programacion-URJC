#include "stdio.h"

void censura(char* s)
{
    while (*s != '\0')
    {
        *s = '*';
        s++;
    }
}

int main()
{
    char s[100];
    printf("Introduce una cadena >>> ");
    fgets(s, 100, stdin);
    censura(s);
    printf("La cadena censurada es %s\n", s);
    return 0;
}