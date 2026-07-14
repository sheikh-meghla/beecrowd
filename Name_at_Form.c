#include<stdio.h>
#include<string.h>
int main(){
    char ch[501];
    fgets(ch, sizeof(ch), stdin);
    int len = strlen(ch);

    if (len<=80)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    

    return 0;
}