#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);

    double days = (double)x / (n + 2);

    printf("%.2lf\n", days);

    return 0;
}