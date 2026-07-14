#include <stdio.h>
#include <string.h>

int main()
{
    char ch[501];

    fgets(ch, sizeof(ch), stdin);

    int len = strlen(ch);

    if (ch[len - 1] == '\n')
    {
        len--;
    }

    if (len <= 140)
    {
        printf("TWEET\n");
    }
    else
    {
        printf("MUTE\n");
    }

    return 0;
}