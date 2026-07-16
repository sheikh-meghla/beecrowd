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
    int y = n - 1;
    while (x < y)
    {
        
        int tamp = a[x];
        a[x] = a[y]; 
        a[y] = tamp;
        x++;
        y--;
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}