#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int t;
    int min, index;

    for (int i = 1; i <= n; i++) {
        scanf("%d", &t);

        if (i == 1) {
            min = t;
            index = 1;
        }

        if (t < min) {
            min = t;
            index = i;
        }
    }

    printf("%d\n", index);

    return 0;
}