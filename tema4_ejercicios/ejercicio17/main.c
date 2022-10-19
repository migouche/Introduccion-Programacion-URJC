#include "stdio.h"

int main()
{
    int n;
    printf("Introduce un numero >>> ");
    scanf("%d", &n);

    printf("Lun Mar Mie Jue Vie Sab Dom\n");

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            if(i == 0 && j < 2)
            {
                printf("    ");
            }
            else
            {
                if(i * 7 + j - 1 > 28)
                    break;
                printf("%3d ", i * 7 + j - 1);
            }
        }
        printf("\n");
    }
    return 0;
}