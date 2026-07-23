#include <stdio.h>

int main()
{
    double r;
    scanf("%lf", &r);

    double ans = 2 * 3.14 * r;

    printf("%.2lf\n", ans);

    return 0;
}