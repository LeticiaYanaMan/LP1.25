#include <stdio.h>

int MDC(int A, int B) {
  if (A % B == 0) {
    return B;
  }
  else {
    return MDC(B, A%B);
  }
}

int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  printf("%d\n", MDC(x, y));

  return 0;
}
