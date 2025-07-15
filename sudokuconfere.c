/* 
  ter uma matriz com vários números - contar quantidade dentro de uma matriz
*/ 


#include <stdio.h>

int VERIF(int M) {
  int V[10];
  if (M == 1) {
    V[0] += 1;
  }
  else if (M == 2) {
    V[1] += 1;
  }
  else if (M == 3) {
    V[2] += 1;
  }
  else if (M == 4) {
    V[3] += 1;
  }
  else if (M == 5) { 
    V[4] += 1;
  }
  else if (M == 6) {
    V[5] += 1;
  }
  else if (M == 7) {
    V[6] += 1;
  }
  else if (M == 8) {
    V[7] += 1;
  }
  else if (M == 9) {
    V[8] += 1;
  }
}

int main() {
  int N;
  int V[10]; // quantos espaços precisam ser preenchidos
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    int VALOR[i];
    scanf("%d", &VALOR[i]);
    VERIF(VALOR[i]);
  }
  for (int j = 0; j < 10; j++) {
    if (V[j] != 0 && V[j] != 1) {
      printf("ERROR\n");
      break;
    }
  }
  printf("FOI");
  return 0;
}







