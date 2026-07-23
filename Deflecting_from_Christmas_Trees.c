#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;

    while (scanf("%d", &m) && m)
    {
        int current = 1;
        int ans = 0;

        while (m--)
        {
            int a[3];
            scanf("%d %d %d", &a[0], &a[1], &a[2]);

            int x = -1;
            int y = 100;

            for (int i = 0; i < 3; i++)
            {
                if (a[i] == 0)
                {
                    int d = abs(current - i);
                    if (d < y)
                    {
                        y = d;
                        x = i;
                    }
                }
            }

            ans += y;
            current = x;
        }

        printf("%d\n", ans);
    }

    return 0;
}