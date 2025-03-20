
#include <stdio.h>

int main() {
  int horas_semanales, precio_hora ;
  int salario_semanal;

  // Obtener las entradas del usuario
  printf("Ingrese las horas semanales trabajadas: ");
  scanf("%d", &horas_semanales);
  printf("Ingrese el precio por hora: ");
  scanf("%d", &precio_hora);

  // Calcular el salario semanal
  if (horas_semanales <= 40) {
    salario_semanal = horas_semanales * precio_hora;
  } else {
    salario_semanal = (40 * precio_hora) + ((horas_semanales - 40) * precio_hora * 3 / 2);
  }

  // Mostrar el resultado
  printf("El salario semanal es: %d\n", salario_semanal);

  return 0;
  }