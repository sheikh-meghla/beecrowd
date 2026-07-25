#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    while (n--)
    {
        int man,step;
        scanf("%d %d",&man,&step);
        for(int i = 1; i < man; i+=2) {
            printf("%d\n",i);
        }
        
    }
    

    return 0;
}