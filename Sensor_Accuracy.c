#include <stdio.h>
#include <math.h>

int main() {

    int h, m;

    while (scanf("%d %d", &h, &m) != EOF) {

        int QT = (h * 60) / m;

        double a[100005];
        double sum = 0.0;

        for (int i = 0; i < QT; i++) {
            scanf("%lf", &a[i]);
            sum += a[i];
        }

        double mean = sum / QT;

        double ans = 0.0;

        for (int i = 0; i < QT; i++) {
            double diff = a[i] - mean;
            ans += diff * diff;
        }

        ans /= (QT - 1);

        printf("%.5lf\n", sqrt(ans));
    }

    return 0;
}