#include <stdio.h>

int multi(int A, int B) {
  if (A == 0 || B == 0) {
    return 0;
  }
  return A + multi(A, B-1);
}

int main() {
  int n1, n2;
  scanf("%d %d", &n1, &n2);
  printf("%d\n", multi(n1, n2));

  return 0;
}
