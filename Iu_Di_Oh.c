#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        int m, l;
        scanf("%d %d", &m, &l);

        int marcos[101][101];
        int leonardo[101][101];

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                scanf("%d", &marcos[i][j]);
            }
        }

        for (int i = 1; i <= l; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                scanf("%d", &leonardo[i][j]);
            }
        }

        int cm, cl;
        scanf("%d %d", &cm, &cl);

        int a;
        scanf("%d", &a);

        if (marcos[cm][a] > leonardo[cl][a])
        {
            printf("Marcos\n");
        }
        else if (marcos[cm][a] < leonardo[cl][a])
        {
            printf("Leonardo\n");
        }
        else
        {
            printf("Empate\n");
        }
    }

    return 0;
}