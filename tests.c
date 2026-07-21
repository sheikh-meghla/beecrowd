#include<stdio.h>

void fun(int n) {

    if(n==0){
        return;
    }

    printf("%d ",n);


    fun(n-1);


    printf("%d ",n);

}


void fun(int n) {

    if(n==0){
        return;
    }

    printf("%d ",n);


    fun(n-1);


    printf("%d ",n);

}

int main(){

    int n = 10;

    fun(n);


    return 0;
}