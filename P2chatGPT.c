// verificar se é palíndromo

#include <stdio.h>
#include <string.h>

int main() {
    char STR[1001];
    char aux[1001];
    int count = 0;
    int len;
    fgets(STR, 1001, stdin);
    STR[strlen(STR) - 1] = '\0';
    
    len = strlen(STR);
    
    for (int i = 0; i < len; i++) {
        aux[i] = STR[i];
    }
    for (int i = 0; i < len; i++) {
        STR[i] = aux[len -i -1];
    }
    for (int i = 0; i < len; i++) {
        if (STR[i] == aux[i] || aux[i] == '\b') {
            count ++;
        }
    }
    
    printf("%d %d\n", count, len);
    if (count == len) {
        printf("é palindromo\n");
    }
    else {
        printf("não é palindromo\n");
    }
    return 0;
}

