#include <stdio.h>
#include <string.h>

int main() {
    char P[1001];
    fgets(P, 1001, stdin);
    P[strlen(P) - 1] = '\0';
    int len = strlen(P);
    for (int i = 0; i < len; i++) {
        if (P[i] = ' ') {
            for (int j = 0; j >= i && j < len; j++) {
                P[i] = P[len - i];
            }
        }
    }
    char aux[1001];
    strcpy(aux, P);
    for (int i = 0; i < len; i++) {
        P[i] = aux[len - i];
    }
    int cmp = strcmp(aux, P);
    if (cmp == 0) {
        printf("e palindromo\n");
    }
    else {
        printf("nao e palindromo\n");
    }
    return 0;
}    
