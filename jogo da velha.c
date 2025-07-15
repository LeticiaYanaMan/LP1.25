#include <stdio.h>

char J[3][3];


char inicio(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      return J[i][j] = '_';
    }
  }
}

char printjogo(int n) {
  for (int i = 0; i < n; i++) {
    for (int i = 0; i < n; i++) {
      return printf("%c", J[i][j]);
    }
  }
}

char colojogo(int l, int c, char t) {
  if (J[l][c] = '_') {
    J[l][c] = t;
    return printjogo(3);
  }
  if (J[l][c] = 'x' || J[l][c] = 'o') {
    return printf("já ocupado\n");
  }
}

int main() {
  int n = 3;
  inicio(n);
  for (int i = 0; i < 1001; i++) {
    int l, c;
    char t;
    scanf("%d %d %c", &l, %c, %t);
    colojogo(l, c, t);
  }
  return 0;
}

  

  


    
