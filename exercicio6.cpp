#include <iostream>
int main () {
    int a;
    printf("Insira um ano: ");
    scanf("%d", &a);
    if (((a % 4 == 0) && !(a % 100 == 0) || (a % 4 == 0) && (a % 400 == 0))) {
        printf(" O ano é bissexto.\n");
    } else {
        printf("O ano não é bissexto.\n");
    }
    return 0;
}