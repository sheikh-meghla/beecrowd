#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    char question[1001];

    while (n--) {
        fgets(question, sizeof(question), stdin);
        printf("I am Toorg!\n");
    }

    return 0;
}