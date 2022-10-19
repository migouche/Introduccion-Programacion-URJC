#include "stdio.h"
#define INT_MAX 2147483647

int main()
{

    int min = INT_MAX;
    int i = INT_MAX;


    while (i != 0) {
        scanf("%d", &i);
        if (i < min && i > 0) {
            min = i;
        }
    }

    printf("el menor número es %d\n", min);
    return 0;
}