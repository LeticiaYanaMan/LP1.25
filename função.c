#include <stdio.h>

int multi(int n1, int n2) {
  int multi = 0;
  multi = n1*n2;
  return multi;
}

int main() {
  int N1, N2;
  scanf("%d %d", &N1, &N2);
  printf("%d\n", multi(N1, N2));

  return 0;
}
