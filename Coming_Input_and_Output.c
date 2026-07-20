#include<stdio.h>
#include<string.h>

int main(){

    char ch[1000];

    fgets(ch, sizeof(ch), stdin);

    int len = strlen(ch);


    for (int i = 0; i < len; i++)
    {


        if (ch[i]==',')
        {
            printf("\n");
        }
        else{
            printf("%c",ch[i]);
        }
    }
    
   
    
    
    return 0;
}