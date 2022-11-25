#include "stdio.h"

int strcomp(char* s1, char* s2)
{
    int n = 0;
    while (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
            n++;
        s1++;
        s2++;
    }
    return n;
}

int main()
{
    char s1[100];
    char s2[100];
    printf("Introduce una cadena >>> ");
    fgets(s1, 100, stdin);
    printf("Introduce otra cadena >>> ");
    fgets(s2, 100, stdin);
    printf("El resultado de comparar %s con %s es %d\n", s1, s2, strcomp(s1, s2));
    return 0;
}