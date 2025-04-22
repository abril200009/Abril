#include <stdio.h>
#include <string.h>

struct CD {
    char titulo[100];
    char artista[50];
    char numero_canciones[50];
    char año[50];
    char precio[50];
};

int main(void) {
    struct CD cd1;

    printf("Ingresa el título\n");
    scanf(" %99[^\n]", cd1.titulo);

    printf("Ingresa el artista\n");
    scanf(" %49[^\n]", cd1.artista);

    printf("Ingresa el número de canciones\n");
    scanf(" %49[^\n]", cd1.numero_canciones);

    printf("Ingresa el año\n");
    scanf(" %49[^\n]", cd1.año);

    printf("Ingresa el precio\n");
    scanf(" %49[^\n]", cd1.precio);

    printf("\nResumen del CD:\n");
    printf("Título: %s\n", cd1.titulo);
    printf("Artista: %s\n", cd1.artista);
    printf("Número de canciones: %s\n", cd1.numero_canciones);
    printf("Año: %s\n", cd1.año);
    printf("Precio: %s\n", cd1.precio);

    return 0;
}