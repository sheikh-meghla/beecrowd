#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    int count_g = 0;
    int count_v = 0;

    while (t--)
    {
        char a;
        int n;
        scanf(" %c %d",&a,&n);
        if (a == 'G')
        {
            count_g += n;
        }
        else
        {
            count_v += n;
        }
        

    }
    
    if (count_v >= count_g)
    {
        printf("A greve vai parar.\n");
    }
    else
    {
        printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
    }
    return 0;
}