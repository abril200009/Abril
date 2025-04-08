
#include <string.h>
   #include <stdio.h>
   int main() {
 char p1[20];
 char p2[20];
    int n;
    printf("Ingresa palabra1: ");
    scanf("%s", p1);
    printf("Ingrese palabra2: ");
    scanf("%s", p2);
    n=strlen(p1);
    for(int i = 0; i < n; i++) {
    strcat(p1, p2);
}
    printf("Resultado: %s", p1);
    return 0;
}