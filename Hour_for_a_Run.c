#include <stdio.h>

int main()
{
    long long v, n;
    scanf("%lld %lld", &v, &n);

    long long total = v * n;

    for (int i = 1; i <= 9; i++)
    {
        printf("%lld", (total * i + 9) / 10);

        if (i != 9)
            printf(" ");
    }

    printf("\n");

    return 0;
}