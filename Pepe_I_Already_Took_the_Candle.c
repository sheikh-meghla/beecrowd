#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int h, m, o;
        scanf("%d %d %d", &h, &m, &o);

        if (o == 1)
            printf("%02d:%02d - A porta abriu!\n", h, m);
        else
            printf("%02d:%02d - A porta fechou!\n", h, m);
    }

    return 0;
}