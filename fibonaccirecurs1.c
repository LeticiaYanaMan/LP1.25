#include <stdio.h>

int fib(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  if (n == 2) {
    return 1;
  }
  return fib(n-1) + fib(n - 2);
}

int main() {
  int N;
  scanf("%d", &N);
  printf("%d\n", fib(N));

  return 0;
}
