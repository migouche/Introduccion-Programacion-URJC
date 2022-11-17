#include "stdio.h"
#define ARR_SIZE 5

int main()
{   
    int v1[ARR_SIZE] = {1, 2, 3, 4, 5};


    int v2[ARR_SIZE];

    for (int i = 0; i < ARR_SIZE; i++)
    {
        *(v2 + i) = *(v1 + ARR_SIZE - 1 - i);
        printf("%d, ", v2[i]);
    }
    printf("\n");

    return 0;
}