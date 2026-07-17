#include <stdio.h>

int main()
{
    int n, min, max;

    while(scanf("%d %d %d", &n, &min, &max) != EOF)
    {
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            int h;
            scanf("%d", &h);

            if(h >= min && h <= max)
            {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}