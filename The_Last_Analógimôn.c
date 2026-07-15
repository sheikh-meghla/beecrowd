#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        int r1, c1, r2, c2;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x;
                scanf("%d", &x);
                if (x == 1)
                {
                    r1 = i;
                    c1 = j;
                }
                else if (x == 2)
                {
                    r2 = i;
                    c2 = j;
                }
            }
        }

        printf("%d\n", abs(r1 - r2) + abs(c1 - c2));
    }

    return 0;
}