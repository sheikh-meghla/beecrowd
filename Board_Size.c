#include <stdio.h>

int main() {
    int x, y, m;

    while (scanf("%d %d %d", &x, &y, &m) != EOF) {

        while (m--) {
            int xi, yi;
            scanf("%d %d", &xi, &yi);

            if ((xi <= x && yi <= y) ||
                (xi <= y && yi <= x))
                printf("Sim\n");
            else
                printf("Nao\n");
        }
    }

    return 0;
}