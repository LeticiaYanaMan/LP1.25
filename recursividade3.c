#include <stdio.h>

int contagem(int N) {
  if (N == 0) {
    return 1;
  }
  return 1 + contagem(N / 10);
}

int main() {
  int N;
  scanf("%d", &N);
  printf("%d\n", contagem(N));

  return 0;
}
