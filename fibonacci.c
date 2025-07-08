#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 1;
    }
    while (n > 2) {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}


int main() {
  int N;
  scanf("%d", &N);
  
  printf("%d\n", fibonacci(N));
  
  return 0;
  
}
