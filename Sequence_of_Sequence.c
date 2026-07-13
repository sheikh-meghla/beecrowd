#include <stdio.h>

int main()
{
    int n;
    int t = 1;

    while (scanf("%d", &n) != EOF)
    {
        int count = 1;

        for (int i = 1; i <= n; i++)
        {
            count += i;
        }

        if (count == 1)
            printf("Caso %d: %d numero\n", t, count);
        else
            printf("Caso %d: %d numeros\n", t, count);

        printf("0");

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf(" %d", i);
            }
        }

        printf("\n\n");

        t++;
    }

    return 0;
}