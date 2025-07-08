#include <stdio.h>

int main() {
  int matriz[10][15];

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 15; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  for (int i = 0; i < 10; i++) {
    int soma = 0;
    for (int j = 0; j < 15; j++) {
      soma += matriz[i][j];
    }
    printf("%d\n", soma);
  }

  return 0;
}
      
  
