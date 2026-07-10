#include <stdio.h>
int main(){
    int countdown = 2;
    while(countdown > 0){
        printf("%d\n", countdown);
        countdown--;
    }
    printf("Countdown finished!\n");
    return 0;

}