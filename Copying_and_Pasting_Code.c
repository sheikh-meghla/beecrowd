#include <stdio.h>
#include <string.h>

int main()
{
    char str[1005];
    int flag = 0;

    while (fgets(str, sizeof(str), stdin))
    {
        if (strstr(str, "<body>"))
        {
            flag = 1;
            continue;
        }

        if (strstr(str, "</body>"))
        {
            flag = 0;
            continue;
        }

        if (flag)
        {
            printf("%s", str);
        }
    }

    return 0;
}