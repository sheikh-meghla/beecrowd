#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        int a[n];
        long long total = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            total += a[i];
        }

        long long x = 0;
        long long ans = total;

        for (int i = 0; i < n - 1; i++)
        {
            x += a[i];
            long long y = total - x;
            long long sub = llabs(x - y);

            if (sub < ans)
            {
                ans = sub;
            }
        }

        printf("%lld\n", ans);
    }

    return 0;
}