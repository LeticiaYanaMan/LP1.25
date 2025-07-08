#include <stdio.h>

int main() {
    char matriz[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%c", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
