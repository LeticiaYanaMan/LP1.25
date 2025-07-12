#include <stdio.h>

double pot(double x, int n) {
  if (n == 0) {
    return 1;
  }
  return x * pot(x, n-1);
}

int main() {
  double X;
  int N;
  scanf("%lf %d", &X, &N);
  printf("%.2lf\n", pot(X, N));

  return 0;
}
