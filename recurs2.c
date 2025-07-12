#include <stdio.h>

int pares(int N) {
  if (N == 0) {
    return printf("%d\n", N);
  }
  pares(N-2);
  return printf("%d\n",N);
}

int main() {
  int PAR;
  scanf("%d", &PAR);
  pares(PAR);

  return 0;
}
