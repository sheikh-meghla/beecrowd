#include <stdio.h>

int main()
{
    char s[20];

    while (scanf("%s", s) != EOF)
    {
        long long ans = 0;
        int i = 0;

        while (s[i] != '\0')
        {
            int value = s[i] - 'A' + 1;
            ans = ans * 26 + value;
            i++;
        }

        if (ans >= 1 && ans <= 16384)
        {
            printf("%lld\n", ans);
        }
        else
        {
            printf("Essa coluna nao existe Tobias!\n");
        }
    }

    return 0;
}