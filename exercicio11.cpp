#include <iostream>
int main () {
    int a;
    printf("Digite quantos Leads sua empresa recebeu: ");
    scanf("%d", &a);
    if (5 >= a) {
        printf("A quantidade de Leads é BAIXA.\n");
    } else if ((a >= 6) && (a <= 10)) {
        printf("A quantidade de Leads é ESPERADA.\n");
    } else if (a >= 11) {
        printf("A quantidade de Leads é ALTA.\n");
    }
    return 0;
}