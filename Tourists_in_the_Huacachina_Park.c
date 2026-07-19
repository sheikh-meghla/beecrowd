#include <stdio.h>
#include <string.h>

int main() {

    char s[10];
    int tourist = 0, jeep = 0, x;

    while (1) {

        scanf("%s", s);

        if (strcmp(s, "ABEND") == 0)
        {
            break;
        }

        scanf("%d", &x);

        if (strcmp(s, "SALIDA") == 0) {
        {
            tourist += x;
            jeep++;
        }
        }
        else {
            tourist -= x;
            jeep--;
        }
    }

    printf("%d\n%d\n", tourist, jeep);

    return 0;
}