#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  for(int i = 0; i < N; i++) {
    char Problem;
    int Temp;
    byte *string[1001];
    scanf("%c %d %s", &Problem, &Temp, &string);
    if (string[0] == '99') {
      printf("D\n");
    }
    else {
      printf("S\n");
    }
  }
  return 0;
}
