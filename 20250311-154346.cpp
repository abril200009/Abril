
#include <stdio.h>

int main() { 
    int arreglo[100];
    
    int i = 0;
    while (i < 100) {
        arreglo[i] = 2 * (i + 1);
        i++;
    }

    i = 0;
    printf("arreglo:\n");
    while (i < 100) {
        printf("%d x 2 = %d\n", i + 1, arreglo[i]);
        i++;
    }

    return 0;
}   