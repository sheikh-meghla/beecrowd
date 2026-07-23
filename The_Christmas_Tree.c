#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int h, d, g;
        scanf("%d %d %d", &h, &d, &g);

        if (h >= 200 && h <= 300 && d >= 50 && g >= 150)
        {
            printf("Sim\n");
        }
        else
        {
            printf("nao\n");
        }
    }

    return 0;
}