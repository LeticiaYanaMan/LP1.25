#include <stdio.h>

int fatorial(int fat[int n]) {
    fat[0] = 1;
    fat[1] = 1;
    fat[2] = 2;
    for (int i = 3; i < n; i++) {
        fat[i] = fat[i-1] * fat[i-2];
    }
    return fat[i];
}

int main() {
    int fat[64];
    int N, result;
    scanf("%d", &N);
    result = fat(fat[N]);
    printf("%d\n", result);
    
    return 0;
}

    
