#include <stdio.h>

int main()
{
    int h;
    scanf("%d", &h);

    if (h < 1.5)
        printf("Bajo\n");
    else if (h < 1.7)
        printf("Medio\n");
    else if(h < 1.9)
        printf("Alto\n");
    else
        printf("Muy alto\n");
}
