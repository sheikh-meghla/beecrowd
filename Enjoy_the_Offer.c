#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int ans,ans1,ans2,ans3;

    while (t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        ans = a / b;
        ans1 = b * ans;
        ans2 = a - ans1;
        ans3 = ans2 + ans;
        printf("%d\n",ans3);
    }
    
    return 0;
}