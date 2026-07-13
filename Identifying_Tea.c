#include <stdio.h>

int main() {
    int T, answer;
    int count = 0;

    scanf("%d", &T);

    for (int i = 0; i < 5; i++) {
        scanf("%d", &answer);

        if (answer == T) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}