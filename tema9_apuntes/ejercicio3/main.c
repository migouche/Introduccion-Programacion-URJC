#include "stdio.h"

struct Vector3D {
    float x;
    float y;
    float z;
};

int main()
{
    struct Vector3D v1;
    printf("Escribe las coordenadas del vector (x, y, z) >>> ");
    scanf("%f, %f, %f", &v1.x, &v1.y, &v1.z);

    printf("El vector es (%f, %f, %f)\n", v1.x, v1.y, v1.z);
    return 0;
}
