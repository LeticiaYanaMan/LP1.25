#include <stdio.h>

void contagem(int N) {
  if (N == 0) {
    printf("0\n");
    return;
  }
  printf("%d\n", N);
  contagem(N-1);
}

int main() {
  int N;
  scanf("%d", &N);
  contagem(N);

  return 0;
}





  
