#include<stdio.h>
int main(){

    int count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);

        if(a[i] % 2 == 0)
        {
            count2++;
        } 
        if(a[i] % 3 == 0) 
        {
            count3++;
        }    
        if(a[i] % 4 == 0) 
        {
            count4++;
        }
        if(a[i] % 5 == 0) 
        {
            count5++;
        }
                
    }
    printf("%d Multiplo(s) de 2\n",count2);
    printf("%d Multiplo(s) de 3\n",count3);
    printf("%d Multiplo(s) de 4\n",count4);
    printf("%d Multiplo(s) de 5\n",count5);

    
    return 0;
}
