#include<stdio.h>
int main(){
    int num[]={40,90,50,33,103,34,80};
    int min = num[0];

    for(int i=1;i<7;i++){

        if(min>num[i]){
            min = num[i];
        }
    }
    printf("%d",min);

}