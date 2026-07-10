#include<stdio.h>
int main(){
    int num[]={10,70,90,20,50,60,30,40};
    int max = num[0];
    for(int i=1;i<8;i++){
        if (max<num[i]){
            max = num[i];

        }
    }

    printf("%d",max);
    
    

}