#include <stdio.h>
#include <string.h>

int main()
{
    char a[25], b[25];

    scanf("%s", a);
    scanf("%s", b);

    if (strcmp(a, b) <= 0)
    {
        printf("%s\n%s\n", a, b);
    }
    else
    {
        printf("%s\n%s\n", b, a);
    }

    return 0;
}