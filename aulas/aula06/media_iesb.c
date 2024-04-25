#include <stdio.h>
#include <math.h>

int main() {

float nota1;
float nota2;

  printf("entre com a primeira nota: ");
  int deu_certo = scanf("%f", &nota1);

  int nota1_eh_valida = nota1 >= 0.0f && nota1 <= 10.0f;
  if (nota1_eh_valida) {
    printf("entre com a segunda nota: ");
    int deu_certo = scanf("%f", &nota2);

    int nota2_eh_valida = nota2 >= 0.0f && nota2 <= 10.0f;
    if (nota2_eh_valida) { 
      float media = nota1 * 0.4f + nota2 * 0.6f;
      printf("A média é %.2f\n", media);

      if(media >= 9.0f && media <= 10.0f) {
        printf("A menção é SS\n");
      } else if (media >= 7.0f && media < 8.9f){
        printf("A menção é MS\n");
      } else if (media >= 5.0f && media < 6.9f){
        printf("A menção é MM\n");
      } else if (media >= 3.0f && media < 4.9f){
        printf("A menção é MI\n");
      } else if (media >= 0.1f && media < 2.9f){
        printf("A menção é II\n");
      } else if (media == 0.0f){
        printf("A menção é SR\n");
      }
      
    } else {
      printf("nota invalida! Entre com um valor entre 0.0 e 10.0\n");
}
  } else {
  printf("nota invalida! Entre com um valor entre 0.0 e 10.0\n");
  }
  
  return 0;
}