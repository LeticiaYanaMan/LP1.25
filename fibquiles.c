#include <stdio.h>

int fib(int n) {
  if (n == 2 || n == 1) {
    return 1;
  }
  else if (n == 0) {
    return 0;
  }
  return fib(n-1) + fib(n-2);
}

int main() {
  int N;
  scanf("%d", &N);
  for (int i = 0; i <= N; i++) {
    printf("fib(%d) = %d\n", i, fib(i));
  }

  return 0;
}
