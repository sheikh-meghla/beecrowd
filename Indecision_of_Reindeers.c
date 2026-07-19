#include <stdio.h>

int main()
{
    int a, sum = 0;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &a);
        sum += a;
    }

    int x = sum % 9;

    if (x == 1)
    {
        printf("Dasher\n");
    }
    else if (x == 2)
    {
        printf("Dancer\n");
    }
    else if (x == 3)
    {
        printf("Prancer\n");
    }
    else if (x == 4)
    {
        printf("Vixen\n");
    }
    else if (x == 5)
    {
        printf("Comet\n");
    }
    else if (x == 6)
    {
        printf("Cupid\n");
    }
    else if (x == 7)
    {
        printf("Donner\n");
    }
    else if (x == 8)
    {
        printf("Blitzen\n");
    }
    else
    {
        printf("Rudolph\n");
    }

    return 0;
}