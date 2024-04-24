/*
3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

int main() {
  int raio = 5;
  float pi = 3.1416f;
  float perimetro = 2 * pi * raio;
  printf("O perímetro da pizza é %f\n", perimetro);
return 0; 
}