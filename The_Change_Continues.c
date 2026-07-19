#include <stdio.h>

int main() {
    double m;

    while (scanf("%lf", &m) != EOF) {

        int total = (int)(m * 240);  

        int h = total / 3600;
        int x = total % 3600;
        int min = x / 60;
        int sec = x % 60;

        h = (h + 6) % 24;

        if (h >= 6 && h < 12)
        {
            printf("Bom Dia!!\n");
        }
        else if (h >= 12 && h < 18)
        {
            printf("Boa Tarde!!\n");
        }
        else if (h >= 18)
        {
            printf("Boa Noite!!\n");
        }
        else
        {
            printf("De Madrugada!!\n");
        }

        printf("%02d:%02d:%02d\n", h, min, sec);
    }

    return 0;
}