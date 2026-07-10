#include<stdio.h>

void hello(int n) {
    printf("%d ",n);

    if(n==0){
        return;
    }

    hello(n-1);

}
int main(){

    hello(5);

    return 0;
}