#include <stdio.h>

int main() {

    int ca, ba, pa;
    int cr, br, pr;

    scanf("%d %d %d", &ca, &ba, &pa);
    scanf("%d %d %d", &cr, &br, &pr);

    int ans = 0;

    if (cr > ca)
    {
        ans += cr - ca;
    }

    if (br > ba)
    {
        ans += br - ba;
    }

    if (pr > pa)
    {
        ans += pr - pa;
    }

    printf("%d\n", ans);

    return 0;
}