/*
5. Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).
*/

#include <stdio.h>
#include <math.h>

int main() {

  float peso = 0.0f, altura = 0.0f, imc = 0.0f;

  printf("Digite o peso: ");
  scanf("%f", &peso);

  printf("Digite a altura: ");
  scanf("%f", &altura);
  
  imc = peso / pow(altura, 2);

  printf("O IMC é: %.2f\n", imc);
  
  return 0;
}