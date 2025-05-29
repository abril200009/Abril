#include <stdio.h>

int main() {
    int opcion;
    float num1, num2, resultado;

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
                printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
                } else {
                    printf("Error: No se puede dividir por cero\n");
                }
                break;
            case 5:
                printf("finalizado!\n");
                break;
            default:
                printf("Opción inválida\n");
        }
    } while (opcion != 5);

    return 0;
}
