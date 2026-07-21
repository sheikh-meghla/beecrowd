#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    int arr[101] = {0};
    int x;

    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        arr[x] = 1;
    }

    int missing = 0;

    for (int i = 1; i <= n; i++) {
        if (arr[i] == 0) {
            missing++;
        }
    }

    printf("%d\n", missing);

    return 0;
}