#include <stdio.h>

int verif(char c) {
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
    return 0;
  }
  else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
    return 0;
  }
  else {
    return 1;
  }
}

int main() {
  char C;
  scanf("%c", &C);
  printf("%d\n", verif(C));

  return 0;
}
