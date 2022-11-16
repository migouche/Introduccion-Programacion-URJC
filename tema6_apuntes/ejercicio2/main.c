#include "stdio.h"

int main()
{
    int v1[5] = {1, 2, 3, 4, 5};

    int *p = &v1[4];

    int v2[5];

    for (int i = 0; i < 5; i++)
    {
        v2[i] = *p;
        p--;
    }

    for (int i = 0; i < 5; ++i) {
        printf("%d ", v2[i]);
    }


    return 0;
}