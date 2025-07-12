#include <stdio.h>

int bin(int n) {
  if (n == 0) {
    return 0;
  }
  printf("%d", n%2);
  bin(n /= 2);
}

int main() {
  int Nd;
  scanf("%d", &Nd);
  bin(Nd);

  return 0;
}
