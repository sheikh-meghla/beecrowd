#include<stdio.h>
int main(){

    int t;
    while (scanf("%d", &t) == 1 && t != 0)
    {
        while (t--)
        {
            int n;
            scanf("%d",&n);
            if (n%2==0)
            {
                printf("%d\n",2*n-2);
            }
            else{
                printf("%d\n",2*n-1);
            }
        }
        
    }
    
    return 0;
}