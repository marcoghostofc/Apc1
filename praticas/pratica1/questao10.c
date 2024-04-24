/*
10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).
*/

#include <stdio.h>

int main() {
  int numero = 6666;
  int unidades = numero % 10;
  int dezenas = (numero / 10) % 10;
  int centenas = (numero / 100) % 10;
  int milhares = numero / 1000;
  printf("%i tem %i unidades, %i dezenas, %i centenas e %i milhares\n", numero, unidades, dezenas, centenas, milhares);
  
return 0; }