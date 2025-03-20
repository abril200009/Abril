
#include <stdio.h>

int main() {
    float calificacion;

    printf("Ingrese la calificación del examen (0-100): ");
    scanf("%f", &calificacion);

    
       if (calificacion >= 80)
        printf("Felicidades, pasas el curso!\nTu calificación es: %.2f\n", calificacion);

    return 0;
}
    