#include <stdio.h>

int main() {
    int N;

    while (scanf("%d", &N) && N != 0) {

        for (int i = 0; i < N; i++) {

            for (int j = 0; j < N; j++) {

                int top = i;
                int left = j;
                int bottom = N - 1 - i;
                int right = N - 1 - j;

                int min = top;

                if (left < min) min = left;

                if (bottom < min) min = bottom;

                if (right < min) min = right;

                if (j == 0)
                    printf("%d", min + 1);
                else
                    printf(" %d", min + 1);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}