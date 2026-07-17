#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int x = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            int temp = a[x];
            a[x] = a[i];
            a[i] = temp;
            x++;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}