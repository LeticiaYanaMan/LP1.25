#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        char codif[51];
        fgets(codif, 50, stdin);
        int len = strlen(codif); 
        int Z;
        scanf("%d", &Z); 
        for(int j = 0; j < len; j++) {
            codif[j] = (codif[j] - 'A' - len + 26) % 26 + 'A';
        }
        printf("%s\n", codif);
    }
    return 0;
}
        
