#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    bool and = a == 1 && b == 1;
    bool nand = !and;
    bool or = a == 1 || b == 1;
    bool nor = !or;
    bool xor = a != b;
    bool imp = !(a == 1 && b == 0);

    return 0;
}

