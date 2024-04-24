/*
6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).
*/

#include <stdio.h>
#include <math.h>

int main() {

  float valor_compra = 0.0f, ano_fabricacao = 0.0f, ano_depreciacao = 0.0f, valor_depreciado = 0.0f;

  printf("Digite o valor de compra do veículo: ");
  scanf("%f", &valor_compra);
  printf("Digite o ano de fabricação do veículo: ");
  scanf("%f", &ano_fabricacao);
  printf("Digite o ano de depreciação do veículo: ");
  scanf("%f", &ano_depreciacao);
  
  valor_depreciado = (ano_depreciacao - ano_fabricacao) * 0.01 * valor_compra;

  printf("O valor depreciado do veículo é: %.2f\n", valor_depreciado);
  
  return 0;
}