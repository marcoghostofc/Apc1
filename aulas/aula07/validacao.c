#include <stdio.h>

int main() {

  int numero;
  int numero_valido = 0;

  while (numero_valido == 0) { 
    printf("Entre com um numero entre 1 e 10: ");
    int deu_certo = scanf("%i", &numero);
    numero_valido = deu_certo && numero >= 1 && numero <= 10;
    if (deu_certo && numero_valido) {
      printf("Segue o Jogo!\n");
    } else {
      printf("Número inválido! rola o programa ai.\n");
      getchar();
    }
  } 

  do { 
    printf("Entre com um numero entre 1 e 10: ");
    int deu_certo = scanf("%i", &numero);
    numero_valido = deu_certo && numero >= 1 && numero <= 10;
    if (deu_certo && numero_valido) {
      printf("Segue o Jogo!\n");
    } else {
      printf("Número inválido! rola o programa ai.\n");
      getchar();
    }
  } while (numero_valido == 0);
  return 0;
}