#include <stdio.h>

int main() {
    int C;
    char T;
    double M[12][12], sum = 0;

    scanf("%d", &C);
    scanf(" %c", &T);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        sum += M[i][C];
    }

    if (T == 'S')
        printf("%.1lf\n", sum);
    else
        printf("%.1lf\n", sum / 12.0);

    return 0;
}