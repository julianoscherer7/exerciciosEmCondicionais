#include <iostream>
int main () {
    int a, b, c;
    printf("Digite um lado do triângulo: ");
    scanf("%d", &a);
    printf("Digite outro lado: ");
    scanf("%d", &b);
    printf("Digite outro lado: ");
    scanf("%d", &c);
    
    if ((a == b) && (b == c)) {
        printf(" O triãngulo é equilátero.\n");
    } else if ((a == b || (b == c) || (a == c))) {
        printf("O triângulo é isósceles.\n");
    } else if (a != b != c) {
        printf("O seu triângulo é escaleno.\n");
    }
        
    return 0;
}