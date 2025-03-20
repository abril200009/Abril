
#include <stdio.h>

int main() {
  int años;
  int salario;
  
    printf ("ingresa tu antigüeda en años : \n");
    scanf("%d", &años);
    printf("ingresa tu salario: \n");
    scanf ("%d", &salario);
    if (años >=5){
    if((salario*.10) >= 1000)
    puts("felicidades tu crédito ha sido aprobado");
    }

    return 0;
    }