#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        long long x;
        scanf("%lld", &x);

        int count = 0;
        int max = 0;

        while (x > 0)
        {
            if (x % 2 == 1)
            {
                count++;

                if (count > max)
                {
                    max = count;
                }
            }
            else
            {
                count = 0;
            }

            x /= 2;
        }

        printf("%d\n", max);
    }

    return 0;
}