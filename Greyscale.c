#include <stdio.h>
#include <string.h>

int main()
{
    int p;
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        char ch[10];
        scanf("%s", ch);

        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (strcmp(ch, "eye") == 0)
        {
            p = 0.30 * a + 0.59 * b + 0.11 * c;
        }
        else if (strcmp(ch, "min") == 0)
        {
            int m = a;

            if (b < m)
                m = b;
            if (c < m)
                m = c;

            p = m;
        }
        else if (strcmp(ch, "max") == 0)
        {
            int m = a;

            if (b > m)
                m = b;
            if (c > m)
                m = c;

            p = m;
        }
        else if (strcmp(ch, "mean") == 0)
        {
            p = (a + b + c) / 3;
        }

        printf("Caso #%d: %d\n", i, p);
    }

    return 0;
}