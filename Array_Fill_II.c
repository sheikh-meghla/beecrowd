#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int n[1000];

    for (int i = 0; i < 1000; i++) {
        n[i] = i % t;
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}