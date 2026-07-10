#include<stdio.h>
int main(){
    int num[] ={0,2,3,4,5,6,7,8,9};

    int even=0;
    int odd =0;

    for(int i=0;i<9;i++){
        if(num[i]%2==0){
            even= even+1;

        }else{
            odd= odd+1;
        }

    }

    printf("even = %d and odd = %d",even, odd);
}