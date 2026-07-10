#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        long long a = 0, b = 1, fib;

        if (n == 0) 
        {
            fib = 0;
        } 
        else if (n == 1) 
        {
            fib = 1;
        } 
        else {
            for (int i = 2; i <= n; i++) {
                fib = a + b;
                a = b;
                b = fib;
            }
            fib = b;
        }

        printf("Fib(%d) = %lld\n", n, fib);
    }

    return 0;
}