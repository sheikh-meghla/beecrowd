#include<stdio.h>
int main(){

    int par[5];
    int impar[5];

    int i = 0,j = 0;

    for (int k = 0; k < 15; k++)
    {
        int x;
        scanf("%d",&x);

        if (x%2 == 0)
        {
            par[i]=x;

            i++;
            if (i==5)
            {
                for (int l = 0; l < 5; l++)
                {
                    printf("par[%d] = %d\n",l,par[l]);
                }
                
                i=0;
            }
            
        }
        else
        {
            impar[j]=x;

            j++;

            if (j==5)
            {
                for (int l = 0; l < 5; l++)
                {
                    printf("impar[%d] = %d\n",l,impar[l]);
                }
                j=0;
            }
            
        }
    }
    for (int l = 0; l < j; l++)
        {
            printf("impar[%d] = %d\n",l,impar[l]);
        }
    for (int l = 0; l < i; l++)
        {
            printf("par[%d] = %d\n",l,par[l]);
        }
    return 0;
}