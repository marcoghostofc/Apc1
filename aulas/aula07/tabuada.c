#include <stdio.h>
#include <math.h>

int main() {
    int numero;

  printf("Entre com um numero de 1 a 10: ");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo && numero > 0 && numero < 11) {
    printf("A tabuada de %i\n", numero);
    for (int i = 1; i <= 10; i++){
      printf("%i x %i = %i\n", numero, i, numero * i);
    }
    printf("A tabuada invertida de &i\n", numero);
    for (int i = 10; i >= 1; i--) {
      printf("%i x %i = %i\n", numero, i, numero * i);
    }
  }
  
  return 0;
}