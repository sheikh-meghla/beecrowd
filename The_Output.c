#include <stdio.h>

int main()
{
    int c;
    scanf("%d", &c);
    getchar();

    char s[1000];

    while(c--)
    {
        fgets(s, sizeof(s), stdin);
        printf("gzuz\n");
    }

    return 0;
}