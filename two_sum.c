#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int target;
    scanf("%d",&target);
    int sum = 0;
    int x = 0;
    int y = n - 1;
    while (x < y)
    {
        sum = a[x] + a[y];
        if (sum == target)
        {
            printf("%d %d\n",a[x],a[y]);
            break;
        }
        if (sum < target)
        {
            x++;
        }
        
        if (sum > target)
        {
            y--;
        }
        
        
        
    }
    
    return 0;
}