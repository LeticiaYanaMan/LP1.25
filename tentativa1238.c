#include <stdio.h>
#include <string.h>

int main() {
  int N;
  char P1[1001];
  char P1aux[1001];
  char P2[1001];
  char P2aux[1001];
  char Pres[1001];
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%1000s %1000s", P1, P2);
    size_t tamanho1 = strlen(P1);
    size_t tamanho2 = strlen(P2);
    for (long int i = 0; i < tamanho1*2 + 1; i++) {
      P1aux[i] = P1[i];
      P1[2*i] = P1aux[i];
    }
    for (long int i = 0; i < tamanho2*2 + 2; i++) {
      P2aux[i] = P2[i];
      P2[1 + 2*i] = P2aux[i];
    }
    for (int i = 0; i < 1001; i++) {
      if (i%2 == 0) {
          if (i > tamanho1*2) {
              Pres[i] = P2[i];
          }
          else {
              Pres[i] = P1[i];
          }
      }
      if (i%2 == 1) {
          if (i > tamanho2*2 + 1) {
              Pres[i] = P1[i];
          }
          else {
              Pres[i] = P2[i]; 
          }
      }
      printf("%c", Pres[i]);
    }
    printf("\n");
  }
  return 0;
}
  
