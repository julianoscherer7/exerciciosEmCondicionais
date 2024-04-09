#include <iostream>
int main () {
    int a;
    printf("Digite um número: ");
    scanf("%d", &a);
    if (a % 15 == 0) {
        printf(" O número é divisível por 3 e 5.\n");
    } else {
        printf("O número não é divisível por 3 e 5.\n");
    }
    return 0;
}