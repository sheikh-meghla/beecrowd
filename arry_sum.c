#include<stdio.h>
int main(){
    int num[9] = {20, 22, 12, 14, 43, 55, 44, 90, 21};
    long int sum = 0;

    for(int i=0; i<9; i++){

        if(num[i]%2==0){
            sum = sum + num[i];
        }

    }

    printf("sum =%lld",sum);

}