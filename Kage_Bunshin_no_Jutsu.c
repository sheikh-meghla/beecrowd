#include <stdio.h>

int main()
{
    int n;

    while(scanf("%d", &n) != EOF)
    {
        int count = 0;

        for(int i = n; i > 1; i /= 2)
        {
            count++;
        }

        printf("%d\n", count);
    }

    return 0;
}