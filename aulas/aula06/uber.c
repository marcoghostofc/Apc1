#include <stdio.h>
#include <math.h>

int main() {

  int avaliacao;

  printf("Entre com a avaliação de 1 a 5: ");
  int deu_certo = scanf("%i", &avaliacao);
  
  switch(avaliacao){
    case 1: printf("o motorista ganhou *\n"); break;
    case 2: printf("o motorista ganhou **\n"); break;
    case 3: printf("o motorista ganhou ***\n"); break;
    case 4: printf("o motorista ganhou ****\n"); break;
    case 5: printf("o motorista ganhou *****\n"); break;
    default: printf("Avaliação inválida! Tente novamente.\n");
  }
  
  // if (avaliacao == 1) {
  //   printf("o motorista ganhou *\n"); 
  // } else if (avaliacao == 2) {
  //   printf("o motorista ganhou **\n");
  // } else if (avaliacao == 3) {
  //   printf("o motorista ganhou ***\n");
  // } else if (avaliacao == 4) {
  //   printf("o motorista ganhou ****\n");
  // } else if (avaliacao == 5) {
  //   printf("o motorista ganhou *****\n");
  // } else {
  //   printf("Avaliação inválida! Tente novamente.\n");
  // }

  return 0;
}
