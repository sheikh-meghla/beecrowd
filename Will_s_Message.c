#include <stdio.h>

int main() {
    char ch[27];

    while (scanf("%s", ch) != EOF) {
        int n;
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            int b;
            scanf("%d", &b);
            printf("%c", ch[b - 1]);
        }

        printf("\n");
    }

    return 0;
}