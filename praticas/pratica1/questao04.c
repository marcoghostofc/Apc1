/*
4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/
#include <stdio.h>

int main() {
  float preco_inicial = 100.0f;

  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;

  float valor_icms = preco_inicial * ICMS;
  float valor_cofins = preco_inicial * COFINS;
  float valor_pis_pasep = preco_inicial * PIS_PASEP;
  float valor_2 = valor_icms * valor_cofins;

  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  printf("preço inicial = R$%f\n", preco_inicial);
  printf("valor ICMS = R$%f\n", valor_icms);
  printf("valor COFINS = R$%f\n", valor_cofins);
  printf("valor PIS/PASEP = R$%f\n", valor_pis_pasep);
  printf("O preço final do produto é R$%f\n", preco_final); 
  printf("ajsojasjo %f\n", valor_2);
  
  return 0;
}
