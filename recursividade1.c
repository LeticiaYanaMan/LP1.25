#include <stdio.h>

int naturais(int n) {
  if (n == 0) {
    return 0;
  }
  return (n + naturais(n -1));
}

int main() {
  int N;
  scanf("%d", &N);
  printf("%d\n", naturais(N));

  return 0; 
}



