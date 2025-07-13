#include <stdio.h>

int count = 0;

int f(int N) {
    if (N == 0) {
        count++;
        return 0;
    }
    if (N == 1) {
        count++;
        return 1;
    }
    count++;
    return f(N - 1) + f(N - 2);
}

int main() {
    int FIB;
    scanf("%d", &FIB);
    printf("fib(%d) = %d calls = %d\n", FIB, count-1, f(FIB));
    
    return 0;
}
