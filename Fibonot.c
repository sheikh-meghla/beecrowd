#include<stdio.h>

#include<stdbool.h>


int main() {
    int n;

    scanf("%d",&n);

    int first_fibo = 1;
    int second_fibo = 2;
    int next_fib = 3;

    int position = 0;

    int i = 3;

    while(true) {
        
        if(i != next_fib){
            position++;
        }else{
            first_fibo = second_fibo;
            second_fibo = next_fib;
            next_fib = first_fibo + second_fibo;
        }


        if(n == position) {
            printf("%d\n",i);
            break;
        }

        i++; 

    }
    return 0;
}