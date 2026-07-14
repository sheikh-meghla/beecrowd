#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[105][105];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1];

            if (sum >= 2)
            {
                printf("S");
            }
            else
            {
                printf("U");
            }
        }
        printf("\n");
    }

    return 0;
}