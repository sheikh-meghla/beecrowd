#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char pos;
    scanf(" %c", &pos);

    while (n--)
    {
        int move;
        scanf("%d", &move);

        if (move == 1)
        {
            if (pos == 'A')
            {
                pos = 'B';
            }
            else if (pos == 'B')
            {
                pos = 'A';
            }
        }
        else if (move == 2)
        {
            if (pos == 'B')
            {
                pos = 'C';
            }
            else if (pos == 'C')
            {
                pos = 'B';
            }
        }
        else
        {
            if (pos == 'A')
            {
                pos = 'C';
            }
            else if (pos == 'C')
            {
                pos = 'A';
            }
        }
    }

    printf("%c\n", pos);

    return 0;
}