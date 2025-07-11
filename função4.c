#include <stdio.h>

int conver(int D, int M, int A) {
  int total = D;
  total += M*30;
  total += (A*12)*30;
  return total;
}
  


int main() {
  int dia, mes, ano;
  scanf("%d %d %d", &dia, &mes, &ano);
  printf("%d\n", conver(dia, mes, ano));

  return 0;
}
