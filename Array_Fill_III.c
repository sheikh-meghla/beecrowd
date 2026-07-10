#include <stdio.h>

int main() {
    double x;
    scanf("%lf", &x);

    double n[100];

    for (int i = 0; i < 100; i++) {
        n[i] = x;
        printf("N[%d] = %.4lf\n", i, n[i]);
        x /= 2.0;
    }

    return 0;
}