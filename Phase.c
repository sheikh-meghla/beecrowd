#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]<a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    int t_k = a[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= t_k)
        {
            count++;
        }
    }

    printf("%d\n", count);
    
    
    
    
    return 0;
}