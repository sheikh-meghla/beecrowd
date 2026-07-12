#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    while (N--) 
    {

        long long T;
        scanf("%lld", &T);
        long long x = 2015 - T;
        long long y = T - 2014;
        
        if (T < 2015){
            printf("%lld D.C.\n",x);
        }
            
        else{
            printf("%lld A.C.\n",y);
        }
            
    }

    return 0;
}