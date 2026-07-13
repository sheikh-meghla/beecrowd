#include <stdio.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    long long star[n];

    int visited[n];
    

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &star[i]);
        sum += star[i];
        visited[i] = 0;
    }

    int attacked = 0;
    int pos = 0;

    while (pos >= 0 && pos < n) {

        if (visited[pos] == 0) {
            visited[pos] = 1;
            attacked++;
        }

        long long sheep = star[pos];

        if (star[pos] > 0) {
            star[pos]--;
            sum--;
        }

        if (sheep % 2 == 1){
            pos++;
        }
            
        else{
            pos--;
        }
            
    }

    printf("%d %lld\n", attacked, sum);

    return 0;
}