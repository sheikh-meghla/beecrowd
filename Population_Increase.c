#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    
    while (t--)
    {
        int n = 0;
        int p1,p2;
        scanf("%d %d",&p1,&p2);
        float r1,r2;
        scanf("%f %f",&r1,&r2);
        while (p1<=p2)
        {               
            p1 += (int)(p1 * r1 / 100.0);
            p2 += (int)(p2 * r2 / 100.0);           
            n++;

            if (n>100)
            {
                break;
            }
        
        }
        if (n > 100){
            printf("Mais de 1 seculo.\n");
        }       
        else{
            printf("%d anos.\n", n);
        }
        
        
    }
    
    return 0;
}