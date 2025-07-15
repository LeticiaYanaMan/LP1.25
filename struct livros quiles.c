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



int f1(char s1[M], char s2[M]) {
  int igual = 1;
  for (int i = 0; s1[i] != /0 && s2[i] != /0; i++) {     // /0 é quando chega no final - enquanto as duas ainda estão rolando: != ;0
    if (s1[i] != s2[i]) {
      igual = 0;
      break;
    }
  }
}      // ele deu outra forma de chegar no mesmo resultado - tirei foto

void imp_livro_edi (char ed[M]) {
  int l;
  for (l = 0; l < 500; l++) {
    if (strcmp(ed, livros[l].editora.nome) == 0) { // ou seja, sao iguais 
      printf("Titulo %s\n", livros[l].titulo 
    }
  }
}

void imp_livro_autor(char au[M]) {
  int l, a;
  for (l = 0; l < 500; l++) {
    for ( a = 0; a < livros[l].qtda ; a++) {
      if (f1(au, livros[l].autores[a].nome) = 0) {
        printf("Titulo: %s\n", livros[l], titulo);
      }
    }
  }
}      // ler os autores de um determinado livro 


int main() {
  imp_livro_edi("editoraX");
  imp_livro_autor("AutorX");
  return 0;
}
  








