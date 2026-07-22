#include <stdio.h>

int main()
{
    int t;

    while(scanf("%d", &t) != EOF)
    {
        double x, min;

        scanf("%lf", &min);

        for(int i = 1; i < t; i++)
        {
            scanf("%lf", &x);

            if(x < min)
            {
                min = x;
            }
        }

        printf("%.2lf\n", min);
    }

    return 0;
}