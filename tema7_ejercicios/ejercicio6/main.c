#include "stdio.h"

int vocales(char* s)
{
    int n = 0;
    while (*s != '\0')
    {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
            n++;
        s++;
    }
    return n;
}

int main()
{
    char s[100];
    printf("Introduce una cadena >>> ");
    fgets(s, 100, stdin);
    printf("La cadena %s tiene %d vocales\n", s, vocales(s));
    return 0;
}