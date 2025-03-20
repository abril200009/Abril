#include <stdio.h>

int main() {
    int edad;
    
    printf("Ingrese su edad en años: ");
    scanf("%d", &edad);
    
    long segundos = edad * 365 * 24 * 60 * 60;

    printf("Has vivido aproximadamente %ld segundos.\n", segundos);

    //system("Pause");
    return 0;
}