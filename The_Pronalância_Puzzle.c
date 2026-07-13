#include<stdio.h>
#include<string.h>
int main(){
    char num[1000];
    scanf("%s",num);
    int len = strlen(num);
    for (int i = len-1; i >= 0; i--)
    {
        printf("%c",num[i]);
    }
    printf("\n");
    return 0;
    
}