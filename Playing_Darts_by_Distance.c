#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int joao = 0, maria = 0;

        for (int i = 0; i < 3; i++)
        {
            int x, d;
            scanf("%d %d", &x, &d);
            joao += x * d;
        }

        for (int i = 0; i < 3; i++)
        {
            int x, d;
            scanf("%d %d", &x, &d);
            maria += x * d;
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