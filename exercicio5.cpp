#include <iostream>
int main () {
    int a, b, c;
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Digite um número novamente: ");
    scanf("%d", &b);
    printf("Selecione uma operação 1 (+), 2(-), 3(/) ou 4(*). ");
    scanf("%d", &c);
    if (c == 1) {
        printf("A soma é de %d\n.", (a+b));
    } else if(c == 2){
        printf("O subtração é igual a %d\n.", (a - b));
    } else if(c == 3) {
        printf(" A divisão é igual a %d\n.", (a / b));
    } else if (c == 4) {
        printf("O produto é de %d\n.", (a * b));
    }
    return 0;
}