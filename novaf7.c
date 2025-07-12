#include <stdio.h>

int modulo(int n) {
  if (n < 0) {
    n *= (-1);
  }
  return n;
}

int main() {
  int N;
  scanf("%d", &N);
  printf("%d\n", modulo(N));

return 0;
}
  
