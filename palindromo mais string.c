//palindromo (sim, de novo)

#include <stdio.h>
#include <string.h>

int main() {
    // ler o palindromo 
    char P[1001];
    fgets(P, 1001, stdin);
    P[strlen(P) - 1] = '\0';
    printf("Palindromo: %s\n", P);
    
    // copiar o palindromo 
    char aux[1001];
    strcpy(aux, P);

    // inverter o palindromo 
    int len;
    len = strlen(P);
    for (int i = 0; i < len; i++) {
        P[i] = aux[len - i - 1];
    }
    printf("Palindromo invertido: %s\n", P);
    
    // comparar o palindromo 
    int comp = strcmp(aux, P);
    if (comp == 0) {
        printf("é palíndromo\n");
    }
    else {
        printf("não é palíndromo\n");
    }
}
