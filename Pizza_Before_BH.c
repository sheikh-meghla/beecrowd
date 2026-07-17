#include <stdio.h>
#include <stdbool.h>
#include<string.h>

int main() {

int people, dates;

while (scanf("%d %d", &people, &dates) != EOF)
{
    bool availableDateFound = false;
    char answer[25];

    for (int i = 0; i < dates; i++)
    {
        char date[25];
        scanf("%s", date);

        bool everyoneAvailable = true;

        for (int j = 0; j < people; j++)
        {
            int available;
            scanf("%d", &available);

            if (available == 0) {
                everyoneAvailable = false;
            }
        }

        if (everyoneAvailable == true && !availableDateFound)
        {
            availableDateFound = true;
            strcpy(answer, date);
        }
    }

    if (availableDateFound)
    {
        printf("%s\n", answer);
    }
    else
    {
        printf("Pizza antes de FdI\n");
    }
}

    return 0;
}