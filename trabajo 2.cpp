
#include <stdio.h>

int main() {
    int A [10];
    A [0] =0;
    A [1] =3;
    A [2] =5;
    A [3] =6;
    A [4] =8;
    A [5] =4;
    A [6] =7;
    A [7] =8;
    A [8] =5;
    A [9] =3;
    A [10] =1;
    
      
   int B [10];
    B [0] =0;
    B [1] =3;
    B [2] =4;
    B [3] =6;
    B [4] =8;
    B [5] =9;
    B [6] =1;
    B [7] =2;
    B [8] =3;
    B [9] =0;
    B [10] =9;
    
    

    
    printf("%d\n", A[3] % (B[2]/2));
    printf("%d\n", B[A[1]]-A[9]);
    printf("%d\n", A[0] + A[1 + 2]); 
    printf("%d\n", A[5] + B[5]);
    printf("%d\n",(A[3]/B[2])/2);
    
    return  0;
    }
    