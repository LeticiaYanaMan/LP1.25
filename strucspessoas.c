#include <stdio.h>

struct pessoa {
    char nome[50];
    int idade;
    char endereco[200];
};
typedef struct pessoa inf_pessoa;

int main() {
    inf_pessoa pessoas[50];
    
    pessoas[0].idade = 3;
    printf("%d\n", pessoas[0].idade);
    
    printf("digite sua idade\n");
    scanf("%d", &pessoas[1].idade);
    printf("%d\n", pessoas[1].idade);
    
    printf("digite seu nome\n");
    scanf("%s", &pessoas[1].nome);
    printf("%s\n", pessoas[1].nome);
    
    return 0;
    
}
