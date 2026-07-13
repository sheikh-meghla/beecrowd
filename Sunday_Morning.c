#include <stdio.h>

int main() {
    int h, m;

    while (scanf("%d:%d", &h, &m) != EOF) {
        int wake = h * 60 + m;
        int arrival = wake + 60;
        int delay = arrival - 480;

        if (delay < 0)
            delay = 0;

        printf("Atraso maximo: %d\n", delay);
    }

    return 0;
}