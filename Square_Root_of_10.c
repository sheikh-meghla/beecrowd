#include<stdio.h>
int main(){
    double ans = 0;
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        ans = 1.0 /(6.0 + ans);
    }
    
    ans = ans + 3;
    printf("%.10lf\n",ans);
    return 0;
}