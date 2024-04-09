#include <iostream>
int main () {
    int a;
    printf("Digite um número: ");
    scanf("%d", &a);
    if (a > 0) {
        printf(" O número é positivo.\n");
    } else {
        printf("O número é negativo.\n");
    }
    return 0;
}