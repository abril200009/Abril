
#include <stdio.h>
#include <math.h>

int main() {
    // Declaración de variables
    double diametro, radio, area;

    // Asignación de valor al diámetro
    diametro = 10.0;

    // Cálculo del radio
    radio = diametro / 2.0;

    // Cálculo del área
    area = M_PI * pow(radio, 2);

    // Mostrar resultados
    printf("Diámetro: %.2f metros\n", diametro);
    printf("Radio: %.2f metros\n", radio);
    printf("Área: %.2f metros cuadrados\n", area);

    return 0;
}
    