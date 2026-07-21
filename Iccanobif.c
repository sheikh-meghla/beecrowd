#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long fib[40];

    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%lld", fib[i]);

        if (i != 0)
            printf(" ");
    }

    printf("\n");

    return 0;
}