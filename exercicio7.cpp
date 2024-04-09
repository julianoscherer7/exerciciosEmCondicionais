#include <iostream>
int main () {
    float a, b;
    printf("Insira a temperatura em celsius caso queria transcrever para fahrenheit, caso não digite 0: ");
    scanf("%f", &a);
    printf("Insira a temperatura em fahrenheit caso queria transcrever para celsius, caso não digite 0: ");
    scanf("%f", &b);
    if (a > b) {
        printf(" A sua temperatura em fahrenheit é de %.2f\n", ((a * 1.8)+ 32 ));
    } else if (a < b) {
        printf("A sua temperatura em celsius é de %.2f\n.", ((b - 32) / 1.8));
    }
    return 0;
}