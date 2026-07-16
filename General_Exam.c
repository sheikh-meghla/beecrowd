#include <stdio.h>
int main()
{
    int n, q;
    while (scanf("%d %d", &n, &q) != EOF)
    {
        int a[100];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            int max = i;

            for (int j = i + 1; j < n; j++)
            {
                if (a[j] > a[max])
                {
                    max = j;
                }
            }

            int temp = a[i];
            a[i] = a[max];
            a[max] = temp;
        }

        while (q--)
        {
            int p;
            scanf("%d", &p);
            printf("%d\n", a[p - 1]);
        }
    }

    return 0;
}