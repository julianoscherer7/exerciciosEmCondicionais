#include <iostream>
int main () {
    int a, b, quero meu saldo;
    std string nome = "quero meu saldo";
    printf("Digite 1 caso queira ver seu saldo: ");
    scanf("%d", &a);
    
    if ((a > 0) && (a < 2)) {
        printf("Você possui (1000) reais na sua conta : ");
        scanf("%d", &b);
    } else {
        printf("O número é negativo.\n");
    }
    return 0;
}