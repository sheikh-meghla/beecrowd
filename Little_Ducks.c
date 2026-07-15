#include <stdio.h>
#include <string.h>

int main()
{
    char p[25];

    while (scanf("%s", p) == 1)
    {
        if (strcmp(p, "-1") == 0)
        {
            break;
        }

        if (strcmp(p, "0") == 0 || strcmp(p, "1") == 0)
        {
            printf("0\n");
            continue;
        }

        int len = strlen(p);
        int i = len - 1;

        while (i >= 0)
        {
            if (p[i] > '0')
            {
                p[i]--;
                break;
            }
            else
            {
                p[i] = '9';
                i--;
            }
        }
        i = 0;
        while (p[i] == '0' && p[i + 1] != '\0')
        {
            i++;
        }

        printf("%s\n", p + i);
    }

    return 0;
}