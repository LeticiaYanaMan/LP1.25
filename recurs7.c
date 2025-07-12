#include <stdio.h>

int imprime(int n) {
  if (n > 100) {
    return 0;
  }
  else {
    printf("%d\n", n);
    imprime(n+1);
  }
}


int main() {
  int N;
  scanf("%d", &N);
  imprime(N);

  return 0;
}
