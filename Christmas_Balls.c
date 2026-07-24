#include <stdio.h>

int main()
{
    int b, g;

    scanf("%d", &b);
    scanf("%d", &g);

    int need = g / 2;

    if (b < need)
    {
        printf("Faltam %d bolinha(s)\n", need - b);
    }
    else
    {
        printf("Amelia tem todas bolinhas!\n");
    }

    return 0;
}