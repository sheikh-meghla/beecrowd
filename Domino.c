#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    long long ans = (n + 1) * (n + 2) / 2;

    printf("%lld\n", ans);

    return 0;
}