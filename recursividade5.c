#include <stdio.h>

int soma(int N) {
  if (N == 0) {
    return 0;
  }
  return (N % 10) + soma(N / 10);
}

int main() {
  int N; 
  scanf("%d", &N);
  printf("%d\n", soma(N));

  return 0;
}
