#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x[105], y[105], z[105];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &x[i], &y[i], &z[i]);
    }

    for (int i = 0; i < n; i++)
    {
        double min_dis = 1e9;

        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }

            int dx = x[i] - x[j];
            int dy = y[i] - y[j];
            int dz = z[i] - z[j];

            double dist = sqrt(dx * dx + dy * dy + dz * dz);
            if (dist < min_dis)
            {
                min_dis = dist;
            }
        }

        if (min_dis <= 20.0)
        {
            printf("A\n");
        }
        else if (min_dis <= 50.0)
        {
            printf("M\n");
        }
        else
        {
            printf("B\n");
        }
    }

    return 0;
}