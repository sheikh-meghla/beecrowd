#include <stdio.h>
#include <string.h>

int main()
{
    int T;

    while (scanf("%d", &T) != EOF)
    {
        int x[55], y[55], z[55];

        for (int i = 0; i < T; i++)
        {
            scanf("%d %d=%d", &x[i], &y[i], &z[i]);
        }

        char w_p_name[55][55];
        int count = 0;

        for (int i = 0; i < T; i++)
        {
            char name[55];
            int idx;
            char ans;

            scanf("%s %d %c", name, &idx, &ans);

            idx--;

            int add = (x[idx] + y[idx] == z[idx]);
            int sub = (x[idx] - y[idx] == z[idx]);
            int mul = (x[idx] * y[idx] == z[idx]);

            int correct = 0;

            if (ans == '+')
            {
                correct = add;
            }
            else if (ans == '-')
            {
                correct = sub;
            }
            else if (ans == '*')
            {
                correct = mul;
            }
            else if (ans == 'I')
            {
                correct = !(add || sub || mul);
            }

            if (!correct)
            {
                strcpy(w_p_name[count], name);
                count++;
            }
        }

        // Bubble Sort
        char temp[55];

        for (int i = 0; i < count - 1; i++)
        {
            for (int j = i + 1; j < count; j++)
            {
                if (strcmp(w_p_name[i], w_p_name[j]) > 0)
                {
                    strcpy(temp, w_p_name[i]);
                    strcpy(w_p_name[i], w_p_name[j]);
                    strcpy(w_p_name[j], temp);
                }
            }
        }

        if (count == 0)
        {
            printf("You Shall All Pass!\n");
        }
        else if (count == T)
        {
            printf("None Shall Pass!\n");
        }
        else
        {
            for (int i = 0; i < count; i++)
            {
                if (i > 0)
                {
                    printf(" ");
                }
                printf("%s", w_p_name[i]);
            }
            printf("\n");
        }
    }

    return 0;
}