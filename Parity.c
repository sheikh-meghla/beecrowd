#include <stdio.h>
#include <string.h>

int main()
{
    char s[105];
    scanf("%s", s);

    int count = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
    }

    printf("%s", s);

    if (count % 2 == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }

    return 0;
}