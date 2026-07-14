#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[105];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            printf("%d\n", i + 1);
            return 0;
        }
    }

    printf("0\n");

    return 0;
}