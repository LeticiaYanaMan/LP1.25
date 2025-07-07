#include <stdio.h>

int rec(int x, int n) {
  if (n == 0 || x == 1) {
    return 1;
  }
  else if (n == 1) {
    return x;
  }
  else {
    return x * rec(x, n - 1);
  }
}

int main() {
  int X, N;
  scanf("%d %d", &X, &N);
  printf("%d\n", rec(X, N));

  return 0;
}
