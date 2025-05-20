#include <stdio.h>

int main() {
    char cadena[10];

    printf("Un int ocupa %zu bytes\n", sizeof(int));
    printf("Un char ocupa %zu bytes\n", sizeof(char));
    printf("Un float ocupa %zu bytes\n", sizeof(float));
    printf("Un double ocupa %zu bytes\n", sizeof(double));
    printf("Una cadena ocupa %zu bytes\n", sizeof(cadena));

    return 0;
}