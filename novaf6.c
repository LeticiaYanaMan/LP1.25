#include <stdio.h>

int triangulo(double A, double B, double C) {
  if (A == B && B == C) {
    return 0;
  }
  else if (A == B || B == C || C == A) {
    return 1;
  }
  else if (A != B && B != C && C != A) {
    return 2;
  }
}

int main() {
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  int T = triangulo(a, b, c);

  if (T == 0) {
    printf("triangulo equilatero\n");
  }
  else if (T == 1) {
    printf("triangulo isosceles\n");
  }
  else if (T == 2) {
    printf("Triangulo escaleno\n");
  }
  return 0;
}


