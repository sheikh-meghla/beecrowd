#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int freq[10] = {0};
    for(int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    for(int i = 0; i <= 9; i++)
    {
        if(freq[i] == 0)
        {
            printf("%d\n", i);
        }
        
    }
    
    return 0;
}