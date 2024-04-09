#include <iostream>
int main () {
    float a, b;
    printf("Insira sua altura em metros: ");
    scanf("%f", &a);
    printf("Insira seu peso em kg: ");
    scanf("%f", &b);
float conta = (b/ (a * a));

  
    if (conta < 18.5) {
        printf("Sua altura é de: %.2f\n", a);
        printf("Seu peso é de: %.2f\n", b);
        printf(" Seu IMC é de %f\n.", conta);
        printf("Abaixo do peso.\n");
    } else if ((conta >= 18.5 && (conta < 25))) {
        printf("Sua altura é de: %.2f\n", a);
        printf("Seu peso é de: %.2f\n", b);
        printf(" Seu IMC é de %f\n.", conta);
        printf("O peso é normal.\n");
    } else if ((conta >= 25) && (conta < 30)) {
        printf("Sua altura é de: %.2f\n", a);
        printf("Seu peso é de: %.2f\n", b);
        printf(" Seu IMC é de %f\n.", conta);
        printf("Sobrepeso.\n");
    } else if (conta >= 30) {
        printf("Sua altura é de: %.2f\n", a);
        printf("Seu peso é de: %.2f\n", b);
        printf(" Seu IMC é de %f\n.", conta);
        printf("Obeso.\n");
    }
    return 0;
}