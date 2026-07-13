#include <stdio.h>

int main() {
    int bills[] = {2, 5, 10, 20, 50, 100};
    int n, m;

    while (scanf("%d %d", &n, &m) == 2 && !(n == 0 && m == 0)) {
        int change = m - n;
        int possible = 0;

        for (int i = 0; i < 6; i++) {
            for (int j = i + 1; j < 6; j++) {
                if (bills[i] + bills[j] == change) 
                {
                    possible = 1;
                    break;
                }
            }
            if (possible) 
            {
                break;
            }
        }

        if (possible)
            {
                printf("possible\n");
            }
        else
            {
                printf("impossible\n");
            }
    }

    return 0;
}