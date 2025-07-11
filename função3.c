#include <stdio.h>

int verif(int n) {
  int V;
  if (n % 2 == 0) {
    V = 0;
  }
  else {
    V = 1;
  }

  if (V == 0) {
    return printf("par\n");
  }
  else {
    return printf("impar\n");
  }
}


int main() {
  int N;
  scanf("%d", &N);
  verif(N);

  return 0;
}
