#include <stdio.h>

int main()
{
    int n, g;
    scanf("%d %d", &n, &g);

    int value[26] = {0};

    while (n--)
    {
        char ch;
        int num;

        scanf(" %c %d", &ch, &num);

        value[ch - 'A'] = num;
    }

    int x;
    scanf("%d", &x);

    int sum = 0;

    while (x--)
    {
        char ch;
        scanf(" %c", &ch);

        sum += value[ch - 'A'];
    }

    printf("%d\n", sum);

    if (sum >= g)
    {
        printf("You shall pass!\n");
    }
    else
    {
        printf("My precioooous\n");
    }

    return 0;
}