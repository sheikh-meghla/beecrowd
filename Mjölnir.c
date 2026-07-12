#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);

    char name[100];
    int n;

    while (t--) {
        scanf("%s %d", name, &n);

        if (strcmp(name, "Thor") == 0) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}