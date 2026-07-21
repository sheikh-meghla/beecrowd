#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[1000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (n <= 2) {
        printf("1\n");
        return 0;
    }

    int count = 1;
    int diff = a[1] - a[0];

    for (int i = 2; i < n; i++) {
        int cur = a[i] - a[i - 1];

        if (cur != diff) {
            count++;
            diff = cur;
        }
    }

    printf("%d\n", count);

    return 0;
}