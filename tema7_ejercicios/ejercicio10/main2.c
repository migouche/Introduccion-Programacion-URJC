#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char* censura(char* s);

int main()
{
    char s[100];
    printf("Introduce una cadena >>> ");
    fgets(s, 100, stdin);
    printf("La cadena censurada es %s\n", censura(s));
    return 0;
}

char* censura(char* s)
{
    char* r = (char*) malloc(sizeof(char) * 100);
    char result[100] = "";
    for(int i = 0; s[i] != '\n'; i++)
    {
        result[i] = '*';
    }
    strcpy(r, result);
    return r;
}
