#include <stdio.h>

double ideal(char S, double A) {
  double pIdeal = 0;
  if (S == 'F') {
    pIdeal = 62.1 * A - 44.7;
  }
  else if (S == 'M') {
    pIdeal = 74.7 * A - 58;
  }
  return pIdeal;
}

int main() {
  double altura;
  char genero;
  scanf("%lf %c", &altura, &genero);
  double peso = ideal(genero, altura);
  printf("seu peso ideal é: %.2lf\n", peso);

  return 0;
}

