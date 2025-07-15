include <stdio.h>
#include <string.h>

int main() {
    char TRE[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            TRE[i][j] = '_';
        }
    }

    for(int i = 0; i < 3; i++) {
        printf("\t");
        for(int j = 0; j < 3; j++) {
            printf("%c", TRE[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
