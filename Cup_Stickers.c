#include <stdio.h>

int main() {
    int n, c, m;
    scanf("%d %d %d", &n, &c, &m);

    int rare[101] = {0};
    int bought[101] = {0};
    int x;

    for (int i = 0; i < c; i++) {
        scanf("%d", &x);
        rare[x] = 1;
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        bought[x] = 1;
    }

    int missing = 0;

    for (int i = 1; i <= n; i++) {
        if (rare[i] && !bought[i]) {
            missing++;
        }
    }

    printf("%d\n", missing);

    return 0;
}