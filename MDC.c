#include <stdio.h>

int MDC(int a, int b) {
    if (a%b == 0) {
        return b;
    }
    return MDC(b, a%b);
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d\n", MDC(A, B));
    return 0;
}
