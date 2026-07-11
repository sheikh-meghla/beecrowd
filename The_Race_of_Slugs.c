#include<stdio.h>
int main(){
  
    int n;
    while (scanf("%d",&n)!= EOF)
    {

        int max = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            scanf("%d",&x);
            if (max<x)
            {
                max = x;
            }
            
            
        }

    if (max<10.0)
    {
    printf("1\n");
    }
    else if (max >= 10 && max < 20 )
    {
        printf("2\n");
    }
    else if (max >= 20)
    {
        printf("3\n");
    }
        
               
    }

    
}
    
