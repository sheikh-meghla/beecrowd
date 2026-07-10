#include <stdio.h>

int main()
{
    int N[10];
    int X;

    scanf("%d", &X);

    for (int i = 0; i < 10; i++)
    {
        N[i] = X;
        printf("N[%d] = %d\n", i, N[i]);
        X *= 2;
    }

    return 0;
}