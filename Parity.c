#include <stdio.h>
#include <string.h>

int main()
{
    char ch[105];
    scanf("%s", ch);

    int count = 0;
    int len = strlen(ch);

    for (int i = 0; i < len; i++)
    {
        if (ch[i] == '1')
        {
            count++;
        }
    }

    printf("%s", ch);

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