/*
9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/
#include <stdio.h>

int main() {
  int anos = 8;
  int meses = 3;
  int dias = 24;
  int total_dias = anos * 365 + meses * 30 + dias;
  printf("%i anos, %i meses e %i dias correspondem a %i dias\n", anos, meses, dias, total_dias);
  
return 0; 
}