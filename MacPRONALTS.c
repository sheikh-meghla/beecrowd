#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    float total = 0;

    while (n--)
    {
        int id, q;
        scanf("%d %d", &id, &q);

        if (id == 1001)
            total += 1.50 * q;
        else if (id == 1002)
            total += 2.50 * q;
        else if (id == 1003)
            total += 3.50 * q;
        else if (id == 1004)
            total += 4.50 * q;
        else if (id == 1005)
            total += 5.50 * q;
    }

    printf("%.2f\n", total);

    return 0;
}