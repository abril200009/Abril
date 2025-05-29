#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcion;
    float num1, num2, resultado;
    char* buffer = (char*)malloc(100 * sizeof(char)); // Asignar memoria para buffer

    if (buffer == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    do {
        printf("Menu de operaciones\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicación\n");
        printf("4. División\n");
        printf("5. Salir\n");
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) {
            printf("Ingrese el primer número: ");
            scanf("%f", &num1);
            printf("Ingrese el segundo número: ");
            scanf("%f", &num2);
        }

        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                sprintf(buffer, "%.2f + %.2f = %.2f", num1, num2, resultado);
                printf("%s\n", buffer);
                break;
            case 2:
                resultado = num1 - num2;
                sprintf(buffer, "%.2f - %.2f = %.2f", num1, num2, resultado);
                printf("%s\n", buffer);
                break;
            case 3:
                resultado = num1 * num2;
                sprintf(buffer, "%.2f * %.2f = %.2f", num1, num2, resultado);
                printf("%s\n", buffer);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    sprintf(buffer, "%.2f / %.2f = %.2f", num1, num2, resultado);
                    printf("%s\n", buffer);
                } else {
                    printf("Error: No se puede dividir por cero\n");
                }
                break;
            case 5:
                printf("Saliendo del programa...\n");
                free(buffer); // Liberar la memoria asignada
                buffer = NULL; // Asignar NULL a buffer
                break;
            default:
                if (opcion != 5) {
                    printf("Opción inválida\n");
                }
        }
    } while (opcion != 5); // Salir del bucle cuando se selecciona la opción 5

    return 0;
}