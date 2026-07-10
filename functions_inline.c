#include<stdio.h>

int hello(int n) {
    // printf("%d",n);

    if(n==0){
        return;
    }

    printf("%d ",hello(n-1));
}
int main(){

    hello(5);

    return 0;
}