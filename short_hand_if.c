#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("You can buy a new cap.");
    }
    else
    {
        printf("You cannot buy a new cap.");
    }

    return 0;
}