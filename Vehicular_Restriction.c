#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char s[101];
        scanf("%s", s);

        int valid = 1;

        if (strlen(s) != 8)
        {
            valid = 0;
        }

        if (valid)
        {
            if (!(s[0] >= 'A' && s[0] <= 'Z'))
            {
                valid = 0;
            } 
            if (!(s[1] >= 'A' && s[1] <= 'Z')) 
            {
                valid = 0;
            }
            if (!(s[2] >= 'A' && s[2] <= 'Z')) 
            {
                valid = 0;
            }
            if (s[3] != '-') 
            {
                valid = 0;
            }
            if (!(s[4] >= '0' && s[4] <= '9')) 
            {
                valid = 0;
            }
            if (!(s[5] >= '0' && s[5] <= '9')) 
            {
                valid = 0;
            }
            if (!(s[6] >= '0' && s[6] <= '9'))
            {
                valid = 0;
            } 
            if (!(s[7] >= '0' && s[7] <= '9')) 
            {
                valid = 0;
            }
        }

        if (!valid)
        {
            printf("FAILURE\n");
        }
        else
        {
            if (s[7] == '1' || s[7] == '2')
            {
                printf("MONDAY\n");
            }
            else if (s[7] == '3' || s[7] == '4')
            {
                printf("TUESDAY\n");
            }
            else if (s[7] == '5' || s[7] == '6')
            {
                printf("WEDNESDAY\n");
            }
            else if (s[7] == '7' || s[7] == '8')
            {
                printf("THURSDAY\n");
            }
            else
            {
                printf("FRIDAY\n");
            }
        }
    }

    return 0;
}