#include<stdio.h>
int main(){
    int num[]={1,2,3,4,5,23,6,7,8,9,0};
    for(int i=0;i<10;i++){
        if(num[i] %2 ==0)
            printf("%d\n",num[i]);
    }
    
}