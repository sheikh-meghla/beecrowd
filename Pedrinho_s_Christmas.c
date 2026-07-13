#include <stdio.h>

int main()
{
    int month, day;
    int days[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

    while (scanf("%d %d", &month, &day) != EOF)
    {
        int current = 0;

        for (int i = 1; i < month; i++)
        {
            current += days[i];
        }

        current += day;

        int christmas = 360;

        if (current == christmas)
        {
            printf("E natal!\n");
        }
        else if (current == christmas - 1)
        {
            printf("E vespera de natal!\n");
        }
        else if (current > christmas)
        {
            printf("Ja passou!\n");
        }
        else
        {
            printf("Faltam %d dias para o natal!\n", christmas - current);
        }
    }

    return 0;
}