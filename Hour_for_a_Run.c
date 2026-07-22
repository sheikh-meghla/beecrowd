#include <stdio.h>

int main()
{
    int v, n;
    scanf("%d %d", &v, &n);

    int total = v * n;

    for(int i = 10; i <= 90; i += 10)
    {
        int ans = (total * i + 99) / 100;

        printf("%d", ans);

        if(i != 90)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}