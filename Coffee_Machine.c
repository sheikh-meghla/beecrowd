#include <stdio.h>

int main() {
    int a1, a2, a3;
    scanf("%d %d %d", &a1, &a2, &a3);

    int t1 = 2 * a2 + 4 * a3;
    int t2 = 2 * a1 + 2 * a3;
    int t3 = 4 * a1 + 2 * a2;

    int ans = t1;
    if (t2 < ans) ans = t2;
    if (t3 < ans) ans = t3;

    printf("%d\n", ans);

    return 0;
}