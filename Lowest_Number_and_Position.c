#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    int min = x[0];
    int pos = 0;

    for (int i = 1; i < n; i++)
    {
        if (x[i] < min)
        {
            min = x[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", pos);

    return 0;
}