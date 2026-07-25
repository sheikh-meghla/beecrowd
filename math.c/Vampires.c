#include <stdio.h>
#include <math.h>

int main() {
    int ev1, ev2, at, d;

    while (scanf("%d %d %d %d", &ev1, &ev2, &at, &d) == 4) {
        if (ev1 == 0 && ev2 == 0 && at == 0 && d == 0) {
            break;
        }

        double p = at / 6.0;
        double q = 1.0 - p;

        double n1 = ceil((double)ev1 / d);
        double n2 = ceil((double)ev2 / d);

        double prob;

        if (at == 3) {
            prob = n1 / (n1 + n2);
        } 
        else {
            double ratio = q / p;
            prob = (1.0 - pow(ratio, n1)) / (1.0 - pow(ratio, n1 + n2));
        }

        printf("%.1f\n", prob * 100.0);
    }

    return 0;
}