#include <stdio.h>

int main()
{
    int m, a, b;
    scanf("%d", &m);
    scanf("%d", &a);
    scanf("%d", &b);

    int c = m - a - b;
    int max = a;

    if (b > max)
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }

    printf("%d\n", max);

    return 0;
}