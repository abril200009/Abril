#include <stdio.h> 
#include <stdlib.h>

int main() {
    int w = 9;
    int x = 3;
    int y = 7;
    int z = -2;

    // Evaluación de las expresiones y uso de printf para imprimir los resultados
    printf("1) %d\n", (x < y) && (w > z));
    printf("2) %d\n", (x >= w) ^ (z <= -2));
    printf("3) %d\n", (y <= x) || (x != w));
    printf("4) %d\n", (w == 9) ^ (x == 3));
    printf("5) %d\n", (y > z) && (z < x));
    printf("6) %d\n", !(w != 9));

    return 0;
}