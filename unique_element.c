#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int x = 0;
    int y = 1;

    while (y < n) {
        if (a[x] != a[y]) {
            x++;
            a[x] = a[y];
        }
        y++;
    }

    printf("%d\n", x + 1);

    for (int i = 0; i <= x; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}