#include <stdio.h>

int main() {
  float valor_da_hora_de_trabalho = 150.00f;
  float total_horas_trabalhadas = 100.0f;

  const float IR = 0.25f;
  const float INSS = 0.11f;
  float salario_bruto = valor_da_hora_de_trabalho * total_horas_trabalhadas;
  float imposto_renda = salario_bruto * IR;
  float imposto_previ = salario_bruto * INSS;
  float salario_liquido = salario_bruto - imposto_renda - imposto_previ;

  printf("\x1b[32m----------------------------------\n");
  printf("     C O N T R A C H E Q U E      \n");
  printf("----------------------------------\x1b[0m\n");
  printf(" \x1b[36mSalário Bruto....: R$ %8.2f\n", salario_bruto);
  printf(" Imposto Renda....: R$ %8.2f\n", imposto_renda);
  printf(" Imposto Previ....: R$ %8.2f\n", imposto_previ);
  printf(" Salário Líquido..: R$ %8.2f\x1b[0m\n", salario_liquido);
  printf("\x1b[32m----------------------------------\x1b[0m\n");

  return 0;
}