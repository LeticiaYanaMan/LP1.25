#include <stdio.h>
#include <string.h>

#define M 200

typedef struct {
  int dia, mes, ano;
}; Tdata

typedef struct {
  char nome[M];
  struct Tdata dn;
  char sexo;
}; Tautor

struct Teditora {
  char nome[M];
  char telefone[20];
  char endereco[M];
};

struct Tlivro {
  char titulo[M];
  struct Tautor autores[10];
  struct Tdata publicacao;
  struct Teditora editora;
  float price;
};

void imp_livro_edi (char ed[M]) {
  int l;
  for (l = 0; l < 500; l++) {
    if (strcmp(ed, livros[l].editora.nome) == 0) { // ou seja, sao iguais 
      printf("Titulo %s\n", livros[l].titulo 
        

  }
}

int main() {
  imp_livro_edi("editoraX");
  return 0;
}
  








