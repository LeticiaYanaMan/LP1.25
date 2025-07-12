#include <stdio.h>

int multi(int n) {
  for (int i = 0; i < 11; i++) {
    printf("%d * %d = %d\n", n, i, n*i);
  }
}

int main() {
  int N;
  scanf("%d", &N);
  multi(N);

  return 0;
}
