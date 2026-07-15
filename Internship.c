#include <stdio.h>

int main()
{
    int t;

    while (scanf("%d", &t) != EOF)
    {
        int grade, credit;
        double totalMarks = 0;
        double totalCredit = 0;

        for (int i = 0; i < t; i++)
        {
            scanf("%d %d", &grade, &credit);

            totalMarks += grade * credit;
            totalCredit += credit;
        }

        double API = totalMarks / (totalCredit * 100.0);

        printf("%.4lf\n", API);
    }

    return 0;
}