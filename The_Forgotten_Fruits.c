#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    char fruit[105][105];
    char virus[505][105];

    for (int i = 0; i < N; i++)
    {
        scanf("%s", fruit[i]);

        for (int j = 0; fruit[i][j] != '\0'; j++)
        {
            if (fruit[i][j] >= 'A' && fruit[i][j] <= 'Z')
            {
                fruit[i][j] += 32;
            }
        }
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%s", virus[i]);

        for (int j = 0; virus[i][j] != '\0'; j++)
        {
            if (virus[i][j] >= 'A' && virus[i][j] <= 'Z')
            {
                virus[i][j] += 32;
            }

        }
    }

    for (int i = 0; i < N; i++)
    {
        int found = 0;

        int len = 0;
        while (fruit[i][len] != '\0')
        {
            len++;
        }

        char rev[105];
        for (int j = 0; j < len; j++)
        {
            rev[j] = fruit[i][len - 1 - j];
        }
        rev[len] = '\0';

        for (int j = 0; j < M && !found; j++)
        {
            int vlen = 0;
            while (virus[j][vlen] != '\0')
            {
                vlen++;
            }

            for (int k = 0; k <= vlen - len; k++)
            {
                int ok = 1;

                for (int p = 0; p < len; p++)
                {
                    if (virus[j][k + p] != fruit[i][p])
                    {
                        ok = 0;
                        break;
                    }
                }

                if (ok)
                {
                    found = 1;
                    break;
                }

                ok = 1;

                for (int p = 0; p < len; p++)
                {
                    if (virus[j][k + p] != rev[p])
                    {
                        ok = 0;
                        break;
                    }
                }

                if (ok)
                {
                    found = 1;
                    break;
                }
            }
        }

        if (found)
        {
            printf("Sheldon come a fruta %s\n", fruit[i]);
        }
        else
        {
            printf("Sheldon detesta a fruta %s\n", fruit[i]);
        }
    }

    return 0;
}