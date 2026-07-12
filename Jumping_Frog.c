#include <stdio.h>
#include <stdlib.h>

int main() {
    int P, N;
    scanf("%d %d", &P, &N);

    int prev_p, curr_p;
    scanf("%d", &prev_p);

    for (int i = 1; i < N; i++) {
        scanf("%d", &curr_p);

        if (abs(curr_p - prev_p) > P) {
            printf("GAME OVER\n");
            return 0;
        }

        prev_p = curr_p;
    }

    printf("YOU WIN\n");

    return 0;
}