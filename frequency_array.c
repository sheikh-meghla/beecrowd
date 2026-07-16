#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    int freq[10]={0};

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }

    for(int i=0;i<=10;i++)
    {
        if(freq[i]!=0)
        {
            printf("%d ase  %d bar\n",i,freq[i]);
        }
    }

    return 0;
}