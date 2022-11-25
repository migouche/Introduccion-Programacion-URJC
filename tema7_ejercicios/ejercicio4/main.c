#include "stdio.h"

int hash(char* s)
{
    int h = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        h += s[i] * (i + 1);
        i++;
    }
    return h;
}

int main()
{
    char s[100];
    printf("Introduce una cadena >>> ");
    fgets(s, 100, stdin);
    printf("El hash de %s es %d\n", s, hash(s));
    return 0;
}