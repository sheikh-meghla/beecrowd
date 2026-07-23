#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long joao = 0, maria = 0;

        for (int i = 0; i < 3; i++)
        {
            long long x, d;
            scanf("%lld %lld", &x, &d);

            long long score = 1;
            for (int j = 0; j < d; j++)
            {
                score *= x;
            }

            joao += score;
        }

        for (int i = 0; i < 3; i++)
        {
            long long x, d;
            scanf("%lld %lld", &x, &d);

            long long score = 1;
            for (int j = 0; j < d; j++)
            {
                score *= x;
            }

            maria += score;
        }

        if (joao > maria)
        {
            printf("JOAO\n");
        }
        else
        {
            printf("MARIA\n");
        }
    }

    return 0;
}