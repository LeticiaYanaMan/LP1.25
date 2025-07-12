#include <stdio.h>

void ordenaVetor(int v[10]) {
  int aux;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (v[i] < v[j]) {
        aux = v[j];
        v[j] = v[i];
        v[i] = aux;
      }
    }
  }
}

void imprimeVetor(int v[10]) {
  for (int i = 0; i < 10; i++) {
    printf("[%d]", v[i]);
  }
}

int main() {
  int v[10];

  for(int i = 0; i < 10; i++) {
    scanf("%d", &v[i]);
  }

  ordenaVetor(v);
  imprimeVetor(v);

  return 0;
}
  
