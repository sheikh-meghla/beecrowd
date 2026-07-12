#include <stdio.h>

int main() {
    int t1, t2, t3, t4;

    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
    int sum =  t1 + t2 + t3 + t4;
    int ans = sum - 3;
    printf("%d\n", ans);

    return 0;
}