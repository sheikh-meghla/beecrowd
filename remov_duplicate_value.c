#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int x = 0;
    int y = 1;
    while (y < n)
    {
        if (a[x]!=a[y])
        {
            x++;
            a[x] = a[y];
        }
        y++;
    }
    for (int i = 0; i <=x; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}