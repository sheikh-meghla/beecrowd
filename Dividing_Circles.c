#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long c2 = n * (n - 1) / 2;
    long long c4 = 0;

    if (n >= 4)
        c4 = n * (n - 1) * (n - 2) * (n - 3) / 24;

    printf("%lld\n", 1 + c2 + c4);

    return 0;
}