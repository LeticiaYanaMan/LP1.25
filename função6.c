#include <stdio.h>

char convert(char c) {
  return c - 32;
}

int main() {
  char C;
  scanf("%c", &C);
  printf("%c\n", convert(C));

  return 0;
}
  
