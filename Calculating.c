#include <stdio.h>

int main()
{
    int m;
    int tc = 1;

    while (scanf("%d", &m) && m != 0)
    {
        int ans;
        scanf("%d", &ans);

        for (int i = 1; i < m; i++)
        {
            char op;
            int num;

            scanf(" %c%d", &op, &num);

            if (op == '+')
            {
                ans += num;
            }
            else
            {
                ans -= num;
            }
        }

        printf("Teste %d\n", tc++);
        printf("%d\n\n", ans);
    }

    return 0;
}