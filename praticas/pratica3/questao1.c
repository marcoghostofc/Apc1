/*
1. Faça um programa em C que determine se um número inteiro lido é par ou ímpar.
*/

#include <stdio.h>

int main() {

  int numero = 0;
  printf("Digite um número inteiro: ");
  int deu_certo = scanf("%d", &numero);
  
  if (deu_certo) {
    int numero_div_2 = numero % 2 == 0;
    if (numero_div_2) {
    printf("O número %d é par.\n", numero);
    } else {
      printf("O número %d é ímpar.\n", numero);
    } else {
    printf("Número inválido! Tente Novamente.\n");
    }
  }
  return 0;
}