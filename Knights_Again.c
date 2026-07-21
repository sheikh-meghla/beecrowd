#include <stdio.h>
#include <stdlib.h>

int main() {
    char c1, c2;
    int r1, r2;

    scanf(" %c%d %c%d", &c1, &r1, &c2, &r2);

    int dx = abs(c1 - c2);
    int dy = abs(r1 - r2);

    if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2))
    {
        printf("VALIDO\n");
    }
    else
    {
        printf("INVALIDO\n");
    }

    return 0;
}