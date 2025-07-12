#include <stdio.h>

int ret(int A, int B) {
  if (A < B) {
    return A;
  }
  else {
    return B;
  }
}

int main() {
  int n1, n2;
  scanf("%d %d", &n1, &n2);
  printf("%d\n", ret(n1, n2));

  return 0;
}
