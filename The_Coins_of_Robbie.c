#include <stdio.h>

int main() {

    int m;

    while (scanf("%d", &m) != EOF) {

        int coin[25];

        for (int i = 0; i < m; i++)
        {
            scanf("%d", &coin[i]);
        }

        int n;
        scanf("%d", &n);

        int sum = 0;

        for (int i = m - 1; i >= 0; i -= n)
        {
            sum += coin[i];
        }

        int prime = 1;

        if (sum < 2)
        {
            prime = 0;
        }

        for (int i = 2; i * i <= sum; i++) {
            if (sum % i == 0) {
                prime = 0;
                break;
            }
        }

        if (prime)
        {
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");

        }
        else
        {
            printf("Bad boy! I’ll hit you.\n");
        }
    }

    return 0;
}