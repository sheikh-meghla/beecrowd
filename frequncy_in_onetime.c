#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int freq[50] = {0};
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    for (int i = 0; i < 50; i++)
    {
        if (freq[i] == 1)
        {
            printf("%d\n",i);
        }
        
    }
    
    
    
    return 0;
}

