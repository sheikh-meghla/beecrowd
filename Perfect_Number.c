#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x;
        scanf("%d", &x);

        int n = 1;
        int sum = 0;

        while (n < x) {
            if (x % n == 0) {
                sum += n;
            }
            n++;
        }

        if (sum == x) {
            printf("%d eh perfeito\n", x);
        } else {
            printf("%d nao eh perfeito\n", x);
        }
    }

    return 0;
}