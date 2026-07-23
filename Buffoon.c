#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int co;
    scanf("%d",&co); 
    int max = 0;
    int a[t];
    for (int i = 0; i < t-1; i++)
    {
        scanf("%d",&a[i]);
        if (max < a[i])
        {
            max = a[i];
        }
        

    }
    
    if (max <= co)
    {
        printf("S\n");
    }
    else{
        printf("N\n");
    }
    
    return 0;
}