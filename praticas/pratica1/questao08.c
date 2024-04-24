/*
8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).
*/

#include <stdio.h>

int main() {
  int segundos = 100000;
  int horas = segundos / 3600;
  int minutos = (segundos % 3600) / 60;
  int segundos_restantes = segundos % 60;
  printf("%i segundos correspondem a %i horas, %i minutos e %i segundos\n", segundos, horas, minutos, segundos_restantes);
  
return 0; 
}