#include<stdio.h>
int main(){

    
    int t;
    
    while (scanf("%d",&t) != EOF)
    {
            float previous_record; 
            float new_record;
        
            int time,dist;
            scanf("%d %d",&time,&dist);
            previous_record = (float) dist / time;
            int day = 1;
            printf("%d\n",day);
            t = t - 1;

            while (t--)
            {
                scanf("%d %d",&time,&dist);
                new_record = (float) dist / time;
                day++;
                
                if (previous_record < new_record)
                {
                    printf("%d\n",day);
                    previous_record = new_record;
                }

                
                
            
            
            }  
    }
    
    return 0;
}