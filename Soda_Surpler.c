#include <stdio.h>

int main()
{
    int E, F, C;

    scanf("%d %d %d", &E, &F, &C);

    int bottles = E + F;
    int ans = 0;

    while (bottles >= C)
    {
        int drink = bottles / C;

        ans += drink;

        bottles = bottles % C + drink;
    }

    printf("%d\n", ans);

    return 0;
}