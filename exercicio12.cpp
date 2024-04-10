#include <iostream>
int main () {
    float a, b, c, d;
    printf("Digite a sua nota da cadeira: ");
    scanf("%f", &a);
    printf("Digite a sua outra nota da cadeira: ");
    scanf("%f", &b);
     printf("Digite a sua outra nota da cadeira: ");
    scanf("%f", &c);
     printf("Insira sua presença na cadeira: ");
    scanf("%f", &d);
    float conta = ((a + b + c) / 3);
  
  if (c < 75) {
    printf("VOCE ESTA REPROVADO\n, ");
 
  } else if ((d >= 75) && (conta >= 7)) {
    printf("VOCÊ ESTA APROVADO\n, "); 
  
  } else if ((d = 100) && (conta >= 7)) {
    printf("VOCÊ ESTA APROVADO\n, ");
  
  } else if (conta > 7) {
    printf("VOCE ESTA APROVADO!\n, ");
  
  } else if ((conta  < 7) && (conta >= 5)) {
    printf("VOCÊ ESTA EM RECUPERAÇÃO!\n");
  
  } else if (conta < 5) {
    printf("VOCE ESTA REPROVADO.\n");
  }
  
  


  return false;
}
