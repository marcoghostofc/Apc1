/*
1. Faça um programa em C que leia três números reais e imprima a média aritmética desses números.
*/

#include <stdio.h>
#include <math.h>

int main() {
  float num1 = 0.0f, num2 = 0.0f, num3 = 0.0f, media = 0.0f;
  printf("Digite o primeiro número: ");
  scanf("%f", &num1);
 
  printf("Digite o segundo número: ");
  scanf("%f", &num2);
  
  printf("Digite o terceiro número: ");
  scanf("%f", &num3);
  
  media = (num1 + num2 + num3) / 3;
  printf("A média aritmética dos números é: %.2f\n", media);

  return 0;
}