#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {
            int sum = a[i] + a[left] + a[right];

            if (sum == 0)
            {
                printf("%d %d %d\n", a[i], a[left], a[right]);
                return 0;
            }
            else if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    printf("Not Found\n");

    return 0;
}