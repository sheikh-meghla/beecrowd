#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int b;
        scanf("%d", &b);

        int a1, d1, l1;
        int a2, d2, l2;

        scanf("%d %d %d", &a1, &d1, &l1);
        scanf("%d %d %d", &a2, &d2, &l2);

        int dabriel = (a1 + d1) / 2;
        if (l1 % 2 == 0)
        {
            dabriel += b;
        }

        int guarte = (a2 + d2) / 2;
        if (l2 % 2 == 0)
        {
            guarte += b;
        }
        if (dabriel > guarte)
        {
            printf("Dabriel\n");
        }
        else if (guarte > dabriel)
        {
            printf("Guarte\n");
        }
        else
        {
            printf("Empate\n");
        }
    }

    return 0;
}