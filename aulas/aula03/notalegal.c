#include <stdio.h>

int main() {

  printf("\x1b[32m------------------------------\n");
  printf("   N  O  T  A  L  E  G  A  L   \n");
  printf("------------------------------\x1b[0m\n");
  printf("\x1b[33m  ITEM         QTD    VALOR    \x1b[0m\n");
  printf("\x1b[31m%-13s  %03i %8.2f\n", "Banana nanica", 1, 15.00);
  printf("%-13s  %03i %8.2f\n", "Maca Fuji", 10, 50.00);
  printf("%-13s  %03i %8.2f\n\x1b[0m", "Uva Globo", 5, 26.00);
  // printf("  Banana nanica     1    R$ 15.00\n");
  // printf("  Maçã Fuji         10   R$ 50.00\n");
  // printf("  Uva Globo         5    R$ 26.00\n");
  printf("\x1b[32m------------------------------\x1b[0m\n");
  // printf("  TOTAL.............:     R$91.00\n");
  printf("\x1b[31m  TOTAL..........: %8.2f\x1b[0m\n", 91.00);
  
  return 0;
}