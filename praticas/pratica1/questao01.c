/*
 1. Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
*/ 

#include <stdio.h>

int main() {

  float a1 = 8.0f;
  float a2 = 7.0f;
  float media = (0.4f * a1) + (0.6f * a2);
  printf("a média final é %f\n", media);
  return 0; 
}