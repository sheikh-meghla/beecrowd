#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    double ans = 0.0;

    for (int i = 0; i < n; i++)
    {
        ans = 1.0 / (2.0 + ans);
    }

    printf("%.10lf\n", 1.0 + ans);

    return 0;
}