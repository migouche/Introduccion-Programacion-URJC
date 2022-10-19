#include "stdio.h"
#include "math.h"

int main()
{
    int n;
    printf("Introduce un numero >>> ");
    scanf("%d", &n);

    float s = sqrt(n);
    if ((int)s == s)
    {
        printf("%d no es primo\n", n);
        return 0;
    }

    for (int i = 2; i < s; i++) {
        if (n % i == 0) {
            printf("%d no es primo\n", n);
            return 0;
        }
    }

    printf("%d es primo\n", n);
    return 0;
}