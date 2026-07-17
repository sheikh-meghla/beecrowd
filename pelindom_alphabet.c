#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[1001];
    fgets(s, sizeof(s), stdin);

    int x = 0;
    int y = strlen(s) - 1;

    while (x < y)
    {
        while (x < y && !isalnum(s[x]))
        {
            x++;
        }
        while (x < y && !isalnum(s[y]))
        {
            y--;
        }
        if (tolower(s[x]) != tolower(s[y]))
        {
            printf("Not Palindrome\n");
            return 0;
        }

        x++;
        y--;
    }

    printf("Yes\n");

    return 0;
}