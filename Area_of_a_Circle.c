#include <stdio.h>

int main() {
    double R, area;
    double pi = 3.14159;

    scanf("%lf", &R);

    area = pi * R * R;

    printf("A=%.4lf\n", area);

    return 0;
}
