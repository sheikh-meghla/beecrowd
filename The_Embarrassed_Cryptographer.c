#include<stdio.h>
#include <stdbool.h>
#include <math.h>
    bool is_prime(int n) {
        if (n < 2) return false;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    int main() {
        
        int target, l;
        scanf("%d %d",&target,&l);
        int p1;
        int p2;

        for (int i = 2; i <= sqrt(target); i++) {
            if (target % i == 0) {
                p1 = i;
                p2 = target / i;
                                
            }

            if (p1 > l && p2 > l)
            {
                printf("GOOD\n");
            }
            else{
                printf("BAD %d\n",i);
            }
        }
        
    
    return 0;
}