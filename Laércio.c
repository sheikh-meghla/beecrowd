#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int M;
        scanf("%d", &M);

        int odd[100];
        int count = 0;

        for (int i = 0; i < M; i++) {
            int x;
            scanf("%d", &x);

            if (x % 2 != 0) {
                odd[count++] = x;
            }
        }

        for (int i = 0; i < count - 1; i++) {
            int min = i;

            for (int j = i + 1; j < count; j++) {
                if (odd[j] < odd[min]) {
                    min = j;
                }
            }

            int temp = odd[i];
            odd[i] = odd[min];
            odd[min] = temp;
        }

        int x = 0;
        int y = count - 1;
        int first = 1;

        while (x <= y) {

            if (first) {
                printf("%d", odd[y]);
                first = 0;
            } else {
                printf(" %d", odd[y]);
            }
            y--;

            if (x <= y) {
                printf(" %d", odd[x]);
                x++;
            }
        }

        printf("\n");
    }

    return 0;
}