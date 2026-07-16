#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int freq[10] = {0};
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    int max = 0;
    int ans = -1;
    for (int i = 0; i < 10; i++)
    {
        if (max < freq[i])
        {
            max = freq[i];
            ans = i;
        }
        
        
    }
    printf("%d\n",ans);
    
    
    return 0;
}

