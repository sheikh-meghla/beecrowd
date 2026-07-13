#include<stdio.h>
#include<string.h>
int main(){

    int m,n;
    scanf("%d %d",&m,&n);
    for (int i = 0; i < n; i++)
    {
        char ch[10];
        scanf("%s",ch);
        if (strcmp(ch, "fechou") == 0)
        {
            m++;
        }
        else if (strcmp(ch, "clicou") == 0)
        {
            m--;
        }
        
    }
    printf("%d\n",m);
    
    return 0;
}