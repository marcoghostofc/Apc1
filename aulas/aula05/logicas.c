#include <stdio.h>

int main() {
  
  int numero;
  printf("Entre com um número: ");
  int deu_certo = scanf("%i", &numero);

  // 0 < x < 10, 0 < x E x < 10
  int maior_que_0_menor_que_10 = numero > 0 && numero < 10;
  printf("0 < número < 10? %i\n", maior_que_0_menor_que_10);

  // x < 0, x > 10, x < 0 OU x > 10
  int menor_que_0_maior_que_10 = numero < 0 || numero > 10;
  printf("numero < 0 OU numero > 10? %i\n", menor_que_0_maior_que_10);

  // x NÃO < 0
  int nao_menor_que_0 = !(numero < 0);
  printf("não menor que 0? %i\n", nao_menor_que_0);

  
return 0; }