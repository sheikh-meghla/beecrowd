#include<stdio.h>
#include<string.h>
int main(){
    char ch[501];
    fgets(ch, sizeof(ch), stdin);
    ch[strcspn(ch, "\n")] = '\0';
    int len = strlen(ch);

    if (len>=1 && len<=80)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    

    return 0;
}