#include <stdio.h>

int soma(int V, int n) {
  if (n == -1) {
    return 0;
  }
  else if (V[n] % 2 == 1) {
    return V[n] + soma(V[n-1], n-1);
  }
}

int main() {
  int V[1001];
  int n;
  scanf("%d", &V);
  for (int i = 0; i < 10001; i++) {
    if (V[i] == /0) {
      n = i;
    }
  }
  printf("%d", soma(V[n], n));

  return 0;
}
