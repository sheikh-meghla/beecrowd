#include <stdio.h>
#include <math.h>

int main()
{
    int xf, yf, xi, yi, vi, r1, r2;

    while (scanf("%d %d %d %d %d %d %d",&xf, &yf, &xi, &yi, &vi, &r1, &r2) != EOF)
    {
        double d = sqrt((xf - xi) * (xf - xi) + (yf - yi) * (yf - yi));

        double x = d + vi * 1.5;
        double y = r1 + r2;

        if (x <= y)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}