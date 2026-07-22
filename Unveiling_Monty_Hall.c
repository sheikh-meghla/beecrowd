#include<stdio.h>
int main(){

    int count = 0;
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int dor;
        scanf("%d",&dor);

        if (dor > 1)
        {
            count++;
        }
        
    }
    printf("%d\n",count);
    
    return 0;
}