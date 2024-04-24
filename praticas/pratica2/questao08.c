/*
8. Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).
*/

#include <stdio.h>
#include <math.h>

int main() {

  float x1 = 0.0f, x2 = 0.0f, y1 = 0.0f, y2 = 0.0f, distancia = 0.0f;

  printf("Digite a coordenada x1: ");
  scanf("%f", &x1);
  printf("Digite a coordenada y1: ");
  scanf("%f", &y1);
  printf("Digite a coordenada x2: ");
  scanf("%f", &x2);
  printf("Digite a coordenada y2: ");
  scanf("%f", &y2);

  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  printf("A distância entre os pontos é: %.2f\n", distancia);

  return 0;
}