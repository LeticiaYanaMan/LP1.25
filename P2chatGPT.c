// string - verificar se é palíndromo

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

// recursiva - soma dos digitos de um numero inteiro positivo 

#include <stdio.h>

int soma(int n) {
    if (n == 0) {
        return n;
    }
    return (n%10) + soma(N/10);
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%d", soma(N));

    return 0;
}

// recursiva - somar até N

#include <stdio.h>

int soma(int n) {
    if(n == 0) {
        return 0;
    }
    return n + soma(n -1);
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%d", soma(N));
    return 0;
}

// contar vogais em string

// verificar se uma string é composta apenas por numeros

// string invertida 

// sudoku - imprimir grade

#include <stdio.h>

char TREE[i][j]

int main() 
    for(int i = 0; i < 3; i++) {
        printf("\t");
        for(int j = 0; j < 3; j++) {
            printf("%c", TRE[i][j]);
        }
        printf("\n");

// sudoku - verificar se um numero ja existe numa linha ou numa coluna
















