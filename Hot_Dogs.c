#include <stdio.h>

int main()
{
    int h, p;
    scanf("%d %d", &h, &p);

    double avg = (double)h / p;
    printf("%.2lf\n", avg);

    return 0;
}