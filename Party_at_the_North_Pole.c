#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int max = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);

        if (max < a[i])
        {
            max = a[i];
        }
        
    }
    int ans = max + 1;
    printf("%d\n",ans);
    return 0;
}