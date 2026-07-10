#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("neither prime nor composite");
    }
    
    for(int i=2; i<n; i++){
        if(n%i==0){
        printf("not prime");
            break;
        }
    }
    printf("prime ");
}