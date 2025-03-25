
   #include <stdio.h>

  int main() {
    int vector[10]; 
    int i = 0;
    for (int i = 0; i < 10; i++) {
    vector[i] = 10;
    }

    
    for (int i = 0; i < 10; i++) {
    printf("vector[%d] = %d\n", i, vector[i]);
    }

    return 0;
     }
