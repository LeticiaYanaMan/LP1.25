#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char M[1001];
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        fgets(M, 1001, stdin);
        size_t tamanho = strlen(M);
        if (M[tamanho - 1] == "/n") {
            M[tamanho - 1] = 0;
            tamanho--
        }

        for(int j = 0; j < tamanho, j++) {
            if ( (M[j] >= 'A' && M[j] <= 'Z') || (M[j] >= 'a' && M[j] <= 'z')) {
                M[j] += 3; 
            }
        }

        for (int j = 0

        
        
