#include <stdio.h>

int main()
{
    double volume, diameter, height, area, radius;

    while (scanf("%lf %lf", &volume, &diameter) != EOF)
    {
        radius = diameter / 2.0;
        area = 3.14 * radius * radius;
        height = volume / area;

        printf("ALTURA = %.2lf\n", height);
        printf("AREA = %.2lf\n", area);
    }

    return 0;
}