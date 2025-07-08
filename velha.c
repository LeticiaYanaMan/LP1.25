#include <stdio.h>

int main() {
    int jogo[3][3];
    
    jogo[1][1] = 1;
    jogo[1][2] = 2;
    jogo[1][3] = 1;
    jogo[2][1] = 0;
    jogo[2][2] = 2;
    jogo[2][3] = 1;
    jogo[3][1] = 2;
    jogo[3][2] = 1;
    jogo[3][3] = 2;
    
    printf("%d %d %d\n", jogo[1][1], jogo[1][2], jogo[1][3]);
    printf("%d %d %d\n", jogo[2][1], jogo[2][2], jogo[2][3]);
    printf("%d %d %d\n", jogo[3][1], jogo[3][2], jogo[3][3]);
    
    return 0;
}
