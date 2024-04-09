#include <iostream>
int main () {
    int a;
    printf("Digite um número: ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf(" O número é par.\n");
    } else {
        printf("O número é ímpar.\n");
    }
    return 0;

}