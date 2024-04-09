#include <iostream>
int main () {
    int a, b;
    printf("Digite a coordenada X: ");
    scanf("%d", &a);
    printf("digite a coordenada Y: ");
    scanf("%d", &b);
    if (a > 0) {
        printf(" O número é positivo.\n");
    } else {
        printf("O número é negativo.\n");
    }
    return 0;
}