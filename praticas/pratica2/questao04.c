/*
4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).
*/

#include <stdio.h>
#include <math.h>

int main() {

  float largura = 0.0f, comprimento = 0.0f, area = 0.0f;

  printf("Digite a largura do terreno: ");
  scanf("%f", &largura);

  printf("Digite o comprimento do terreno: ");
  scanf("%f", &comprimento);

  area = (largura * comprimento) / 10000;

  printf("A área do terreno em hectares é: %.2f\n", area);
  
  return 0;
}