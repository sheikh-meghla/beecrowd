#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Invalido\n");
        return 0;
    }

    if (a == b && b == c)
    {
        printf("Valido-Equilatero\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Valido-Isoceles\n");
    }
    else
    {
        printf("Valido-Escaleno\n");
    }

    int x = a, y = b, z = c;

    if (x > y)
    {
        int t = x;
        x = y;
        y = t;
    }

    if (y > z)
    {
        int t = y;
        y = z;
        z = t;
    }

    if (x > y)
    {
        int t = x;
        x = y;
        y = t;
    }

    if (x * x + y * y == z * z)
    {
        printf("Retangulo: S\n");
    }
    else
    {
        printf("Retangulo: N\n");
    }

    return 0;
}