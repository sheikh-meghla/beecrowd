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

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        if (a[left] == a[right])
        {
            left++;
            right--;
        }
        else{
            printf("No\n");
            return 0;
        }

        
        
    }

    printf("Yes\n");

    return 0;
}