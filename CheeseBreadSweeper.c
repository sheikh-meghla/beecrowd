#include <stdio.h>

int main()
{
    int m, n;

    while (scanf("%d %d", &m, &n) != EOF)
    {
        int a[m][n];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == 1)
                {
                    printf("9");
                }
                else
                {
                    int count = 0;

                    if (i > 0 && a[i-1][j] == 1) 
                    {
                        count++;
                    }
                    if (i < m-1 && a[i+1][j] == 1)
                    {
                        count++;
                    } 
                    if (j > 0 && a[i][j-1] == 1) 
                    {
                        count++;
                    }
                    if (j < n-1 && a[i][j+1] == 1)
                    {
                        count++;
                    } 

                    printf("%d", count);
                }
            }
            printf("\n");
        }
    }

    return 0;
}