#include <stdio.h>

struct infPessoais {
  char nome[50];
  int idade;
  float massa;
};

typedef struct infPessoais pessoa;

int main() {
  pessoa *roberto;
  return 0;
}
