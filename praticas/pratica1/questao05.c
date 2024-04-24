/*
5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/

#include <stdio.h>

int main() {
  float gigabytes = 1.0f;
  float bytes = gigabytes * 1024 * 1024 * 1024;
  printf("1GB = %f bytes\n", bytes);
return 0; 
}