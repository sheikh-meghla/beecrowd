#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) && n != 0)
    {
        int total = 2 * n;
        long long a[20005];

        for (int i = 0; i < total; i++)
        {
            scanf("%lld", &a[i]);
        }

        long long minSum = a[0] + a[total - 1];
        long long maxSum = minSum;

        int i = 0, j = total - 1;

        while (i < j)
        {
            long long sum = a[i] + a[j];

            if (sum < minSum)
            {
                minSum = sum;
            }

            if (sum > maxSum)
            {
                maxSum = sum;
            }

            i++;
            j--;
        }

        printf("%lld %lld\n", maxSum, minSum);
    }

    return 0;
}