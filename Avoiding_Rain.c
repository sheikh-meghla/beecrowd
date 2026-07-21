#include<stdio.h>
#include<string.h>

int main() {

    int home_sata = 0, office_sata = 0;
    int b_h_s = 0, b_o_s = 0;

    int n;
    scanf("%d", &n);

    while (n--) {
        char home[10], office[10];
        scanf("%s %s", home, office);

        if (strcmp(home, "chuva") == 0) {
            if (home_sata > 0)
            {
                home_sata--;
            }
            else
            {
                b_h_s++;
            }

            office_sata++;
        }

        if (strcmp(office, "chuva") == 0) {
            if (office_sata > 0)
            {
                office_sata--;
            }
            else
            {
                b_o_s++;
            }

            home_sata++;
        }
    }

    printf("%d %d\n", b_h_s, b_o_s);

    return 0;
}