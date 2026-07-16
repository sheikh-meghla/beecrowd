#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int vote;
            scanf("%d", &vote);

            if (vote == 1)
                count++;
        }

        if (3 * count >= 2 * n)
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");
    }

    return 0;
}