#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double sum = 0.0;

    while (n--) {
        int c, p;
        scanf("%d %d", &c, &p);

        sum += (double)c / p;
    }

    if (sum <= 1.0)
    {
        printf("OK\n");
    }
    else
    {
        printf("FAIL\n");
    }

    return 0;
}