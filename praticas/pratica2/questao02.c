/*
2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.
*/

#include <stdio.h>
#include <math.h>

int main() {

  int num1 = 0, num2 = 0, quociente = 0, resto = 0;
  
  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  
  printf("Digite o segundo número: ");
  scanf("%d", &num2);
  
  quociente = num1 / num2;
  resto = num1 % num2;
  
  printf("O quociente da divisão é: %d\n", quociente);
  
  printf("O resto da divisão é: %d\n", resto);
  
  return 0;
}