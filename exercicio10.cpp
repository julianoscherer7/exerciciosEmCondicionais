#include <iostream>
int main () {
    int a, b;
    b = 1000;
    printf("O seu saldo é de 1000 reais. Quanto quer retirar? ");
    scanf("%d", &a);
    
    if ((b >= a) && (a > 0)) {
    printf("Você consegue sacar seu saldo\n");

     } else {
        printf("Você não consegue sacar o saldo :/\n");
    }

      
    return 0;
}