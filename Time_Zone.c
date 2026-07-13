#include<stdio.h>
int main(){
    int avr;
    int start_t, traval_t, d_t;
    scanf("%d %d %d",&start_t,&traval_t,&d_t);

    avr = start_t + traval_t + d_t;
    if (avr >= 24)
    {
        avr -= 24;
    }
    else if (avr < 0)
    {
        avr += 24;
    }

    printf("%d\n", avr);
    
    
    return 0;
}