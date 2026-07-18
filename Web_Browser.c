#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        char words[10005][105];

        for (int i = 0; i < n; i++)
        {
            scanf("%s", words[i]);
        }

        int q;
        scanf("%d", &q);

        while (q--)
        {
            char query[105];
            scanf("%s", query);

            int count = 0;
            int maxLength = 0;
            int len = strlen(query);

            for (int i = 0; i < n; i++)
            {
                if (strncmp(words[i], query, len) == 0)
                {
                    count++;

                    int wordLength = strlen(words[i]);
                    if (wordLength > maxLength)
                    {
                        maxLength = wordLength;
                    }
                }
            }

            if (count == 0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d %d\n", count, maxLength);
            }
        }
    }

    return 0;
}