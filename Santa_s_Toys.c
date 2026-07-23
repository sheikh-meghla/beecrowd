#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char name[100];
    char gender;
    int boys = 0, girls = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%s %c", name, &gender);

        if (gender == 'M')
        {
            boys++;
        }
        else
        {
            girls++;
        }
    }

    printf("%d carrinhos\n", boys);
    printf("%d bonecas\n", girls);

    return 0;
}