#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    
    int sum = 0;  
    
    int a,b;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&a,&b);
        sum = a + b;
        printf("%d\n",sum);
    }
                  
    
    
}