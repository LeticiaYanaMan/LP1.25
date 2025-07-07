#include <stdio.h>

int pot(int a, int b) {
  if (b == 0) {
    return 1; 
  }
  return a * pot(a, b - 1);
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", pot(a, b));

  return 0;
}




  
