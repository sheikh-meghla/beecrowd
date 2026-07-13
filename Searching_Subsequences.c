#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int caso = 1;

    while (scanf("%s %s", a, b) != EOF)
    {
        int len1 = strlen(a);
        int len2 = strlen(b);

        int count = 0;
        int last = 0;

        for (int i = 0; i <= len2 - len1; i++)
        {
            int match = 1;

            for (int j = 0; j < len1; j++)
            {
                if (a[j] != b[i + j])
                {
                    match = 0;
                    break;
                }
            }

            if (match)
            {
                count++;
                last = i + 1;   // 1-based position
            }
        }

        printf("Caso #%d:\n", caso++);

        if (count == 0)
        {
            printf("Nao existe subsequencia\n");
        }
        else
        {
            printf("Qtd.Subsequencias: %d\n", count);
            printf("Pos: %d\n", last);
        }

        printf("\n");
    }

    return 0;
}