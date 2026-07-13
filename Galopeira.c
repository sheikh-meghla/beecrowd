#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    while (n--)
    {
        char ch[10000];
        scanf("%s",ch);
        int len = strlen(ch);
        float ans = len*0.01;
        printf("%.2f\n",ans);
    }
    
    return 0;
}