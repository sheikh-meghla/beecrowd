#include <stdio.h>

int main()
{
    int X1, Y1, X2, Y2;
    int tc = 1;

    while (1)
    {
        scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);

        if (X1 == 0 && Y1 == 0 && X2 == 0 && Y2 == 0)
        {
            break;
        }
        int N;
        scanf("%d", &N);

        int count = 0;

        while (N--)
        {
            int x, y;
            scanf("%d %d", &x, &y);

            if (x >= X1 && x <= X2 && y >= Y2 && y <= Y1)
            {
                count++;
            }
        }

        printf("Teste %d\n", tc++);
        printf("%d\n", count);
    }

    return 0;
}