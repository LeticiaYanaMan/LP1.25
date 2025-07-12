#include <stdio.h>

void incrementa(int *x);

int main() {
  int X = 0;
  incrementa(&X);
  printf("%d\n", X);

  return 0;
}

void incrementa(int *x) {
  (*x)++;
}

// saída do programa: 1
