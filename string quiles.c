#include <stdio.h>

int main() {
  char STR[8];

// como se le com fgets
  fgets(STR, 8, stdin);
  STR[strlen(STR) - 1] = '\0';

// como se le com scanf
  scanf("%7s", STR);

// ordenar 
int ordenado(char frase[], int n) {
  for (int i = 0; i<n; i++) {
    if (frase[i-1] > frase[i])
      return 0;
  }
  return 1;
}

// retornar o que ordena
int ordenado(char frase[], int n) {
  for (in ti = 1; i<n; i++) {
    if (frase[i-1] > frase[i]) 
      return 1;
  }
  return n;
}

