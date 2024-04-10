#include <iostream>
int main () {
    float a, b, c;
    printf("Digite a sua nota da cadeira: ");
    scanf("%f", &a);
     printf("Digite a sua nota na recuperação: ");
    scanf("%f", &b);
     printf("Insira sua presença na cadeira: ");
    scanf("%f", &c);
    float conta = ((a+b) - 10);
    if (((a <= 7) && (a >= 5)) && (c >= 75)) {
        printf("VOCÊ ESTA APROVADO\n");
    } else if (((a <= 7) && (a >= 5)) && (conta >= 0) && (c > 75)) {
        printf("VOCÊ FOI APROVADO\n");
    }  else if (((a <= 7) && (a >= 5)) && (conta < 0)) {
        printf("VOCE FOI REPROVADO");
    }
    return 0;
}