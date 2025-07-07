#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return (n * fatorial(n - 1));
}

int main() {
    int N;
    scanf("%d", &N);
    printf("fatorial de %d é %d\n", N, fatorial(N));

    return 0;
}
