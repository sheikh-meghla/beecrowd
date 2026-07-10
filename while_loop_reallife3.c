#include<stdio.h>

int main(){
    int num = 98574;

    int revnum = 0;
    while (num)
    {
        revnum = revnum * 10 + num % 10;
        num /= 10;

        
    }
    printf("%d",revnum);
    
    return 0;
}