#include <stdio.h>

int comp(int N) {
  if (5 <= N && N <= 7) {
    return 0;
  }
  else if (8 <= N && N <= 10) {
    return 1;
  }
  else if (11 <= N && N <= 13) {
    return 2;
  }
  else if (14 <= N && N <= 17) {
    return 3;
  }
  else if (18 <= N) {
    return 4;
  }
}

int main() {
  int Idade;
  scanf("%d", &Idade);
  if (comp(Idade) == 0) {
    printf("Infantil A\n"); 
  } 
  else if (comp(Idade) == 1) {
    printf("Infantil B\n");
  }
  else if (comp(Idade) == 2) {
    printf("Juvenil A\n");
  }
  else if (comp(Idade) == 3) {
    printf("Juvenil B\n");
  }
  else if (comp(Idade) == 4) {
    printf("Adulto\n");
  }
  return 0;
}










