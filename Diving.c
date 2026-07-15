#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        float sum = 0,max = -1, min = 11;
        char name[50];
        scanf("%s",name);
        float dif;
        scanf("%f",&dif);
        float score;
        for (int i = 0; i < 7; i++)
        {
            scanf("%f",&score);
            sum += score;
            if (max < score)
            {
                max = score;
            }
            if (min>score)
            {
                min = score;
            }

        }
        sum = sum - max - min;
       
        float ans = sum * dif;
        printf("%s %.2f\n", name, ans);
        

    }
    
}