#include <stdio.h>
#include <string.h>

int main() {
    int t;

    while (1) {
        scanf("%d", &t);
        if (t == 0)
        {
            break;
        }

        getchar();
        int total = 0;

        while (t--) {
            int n;
            char food[30];
            scanf("%d ", &n);
            fgets(food, sizeof(food), stdin);
            food[strcspn(food, "\n")] = '\0';
            if (strcmp(food, "suco de laranja") == 0)
            {
                total += n * 120;
            }
            else if (strcmp(food, "morango fresco") == 0)
            {
                total += n * 85;
            }
            else if (strcmp(food, "mamao") == 0)
            {
                total += n * 85;
            }
            else if (strcmp(food, "goiaba vermelha") == 0)
            {
                total += n * 70;
            }
            else if (strcmp(food, "manga") == 0)
            {
                total += n * 56;
            }
            else if (strcmp(food, "laranja") == 0)
            {
                total += n * 50;
            }
            else if (strcmp(food, "brocolis") == 0)
            {
                total += n * 34;
            }
        }

        if (total < 110)
        {
            printf("Mais %d mg\n", 110 - total);
        }
        else if (total > 130)
        {
            printf("Menos %d mg\n", total - 130);
        }
        else
        {
            printf("%d mg\n", total);
        }
    }

    return 0;
}