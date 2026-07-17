#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    int freq[101]={0};

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }

    for(int i = 0; i <= 100; i++)
    {
        if(freq[i] == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}