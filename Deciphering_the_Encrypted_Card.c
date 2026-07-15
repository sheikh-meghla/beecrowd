#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int c, n;
    while (scanf("%d %d", &c, &n) == 2) {
        getchar();
        char a[25], b[25];
        fgets(a, sizeof(a), stdin);
        fgets(b, sizeof(b), stdin);

        a[strcspn(a, "\n")] = '\0';
        b[strcspn(b, "\n")] = '\0';
        for (int i = 0; i < n; i++){

            char s[1005];
            fgets(s, sizeof(s), stdin);
            for (int j = 0; s[j] != '\0'; j++) {
                for (int k = 0; k < c; k++) {
                    if (s[j] == a[k]) {
                        s[j] = b[k];
                        break;
                    }
                    if (s[j] == b[k]) {
                        s[j] = a[k];
                        break;
                    }
                    if (isalpha(s[j]) && isalpha(a[k]) && tolower(s[j]) == tolower(a[k])) {
                        if (isupper(s[j]))
                            s[j] = toupper(b[k]);
                        else
                            s[j] = tolower(b[k]);
                        break;
                    }

                    if (isalpha(s[j]) && isalpha(b[k]) && tolower(s[j]) == tolower(b[k])) {
                        if (isupper(s[j]))
                            s[j] = toupper(a[k]);
                        else
                            s[j] = tolower(a[k]);
                        break;
                    }
                }
            }

            printf("%s", s);
        }

        printf("\n");
    }

    return 0;
}