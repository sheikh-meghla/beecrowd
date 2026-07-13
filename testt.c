#include<stdio.h>
int main(){
    int ans[3];
    int a[10]={1,2,3,40,4,5,5,30};

    int max = a[0];

    int k = 0;

    int counter =  0;

    int index;

    while (1)
    {
        
        for(int i = 1; i < 10; i++){
                if (max < a[i]){
                    max = a[i];
                    counter++;
                    index = i;
                }
        }
       ans[k] = max;
       k++;
       max = 0;
       a[index] = -1;
        
        if(counter==2){
            break;
        }
    }

    for(int i = 0;i<3;i++){
        printf("%d ",ans[i]);
    }  
    return 0;
}