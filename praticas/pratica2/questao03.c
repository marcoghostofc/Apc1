/*
3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).
*/

#include <stdio.h>
#include <math.h>

int main() {

  float celsius = 0.0f, fahrenheit = 0.0f;
  
  printf("Digite a temperatura em graus Celsius: ");
  scanf("%f", &celsius);

  fahrenheit = (celsius * 9 / 5) + 32;
  printf("A temperatura em graus Fahrenheit é: %.2f\n", fahrenheit);
  
  return 0;
}
