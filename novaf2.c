#include <studio.h>

double ideal(char S, double A) {
  if (S == 'M') {
    return 62,1*A - 44,7;
  }
  else if (S == 'H') {
    return 72,7*A - 58;
  }
}

int main() {
  double altura;
  char genero;
  scanf("%lf %c", &altura, &genero);
  printf("seu peso ideal é: %.2lf\n", ideal(S, A));

  return 0;
}
