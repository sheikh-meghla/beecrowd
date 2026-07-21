#include <stdio.h>

int main() {
    int x, y;
    scanf("%d%d", &x, &y);

    printf("%d\n", x * y + (x - 1) * (y - 1));
    printf("%d\n", 2 * (x - 1) + 2 * (y - 1));

    return 0;
}