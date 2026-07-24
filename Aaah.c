#include <stdio.h>
#include <string.h>

int main()
{
    char jon[1005], doc[1005];

    scanf("%s", jon);
    scanf("%s", doc);

    int a1 = 0, a2 = 0;

    for (int i = 0; jon[i] != '\0'; i++)
    {
        if (jon[i] == 'a')
        {
            a1++;
        }
    }

    for (int i = 0; doc[i] != '\0'; i++)
    {
        if (doc[i] == 'a')
        {
            a2++;
        }
    }

    if (a1 >= a2)
    {
        printf("go\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}