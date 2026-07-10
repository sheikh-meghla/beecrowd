#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    long int f1=0;
    long int f2=1;


    printf("0\n1\n");

    for(int i=1;i<=n;i++) {
        long int next = f1+f2;

        printf("%lld\n",next);

        f1 = f2;
        f2 = next;
    }

}