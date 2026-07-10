#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x;
        scanf("%d", &x);

        int prime = 1;

        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
            printf("%d eh primo\n", x);
        else
            printf("%d nao eh primo\n", x);
    }

    return 0;
}