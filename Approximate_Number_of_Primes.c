#include <stdio.h>
#include <math.h>

int main()
{
    double n;
    scanf("%lf", &n);

    double p = n / log(n);
    double m = 1.25506 * p;

    printf("%.1lf %.1lf\n", p, m);

    return 0;
}