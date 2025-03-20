#include <stdio.h>

int main() {
   
    float a1 = 1.0, b1 = 3.0, c1 = 1.0, d1 = 3.0, e1 = 5.0, b2 = 1.0, c2 = 2.0, d2 = 1.0, e2 = 2.0, f=23, g=30,k=4.0;
    float result1, result2;

    result1 = (a1 /b1)+(b1 /e1) +(a1/g)/ (f/g); 
    
    result2 = (e1+ c2/(b2/ (b2+ c2 / (e2- b2/k))));

    
    printf("Resultado de la primera operación: %.5f\n",result1); 
    printf("Resultado de la segunda operación: %.2f\n",result2); 

    return 0;

}