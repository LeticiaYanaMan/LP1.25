#include <stdio.h>

int SOMA(int N) {
  int sum = 0;
  for (int i = 0; i <= N; i++) {
    sum += (i*i);
  }
  return sum;
}
  

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", SOMA(n));

  return 0;
}
