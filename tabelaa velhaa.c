#include <stdio.h>

char T[3][3];
int n = 3;

char jogo(int n) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            T[i][j] = '_';
        }
    }
}



int imprimir(int n) {
    jogo(n);
    for(int i = 0; i < n; i++) {
        printf("\t");
        for (int j = 0; j < n; j++) {
            printf("%c", T[i][j]);
        }
        printf("\n");
    }
    return 0;
}





int main() {
    int colu, lin;
    char C;
    jogo(3);
    scanf("%d %d %c", &colu, &lin, &C);
    T[lin][colu] = C;
    imprimir(3); 
}




