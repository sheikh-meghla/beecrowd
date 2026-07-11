#include<stdio.h>
#include<string.h>
int main(){

    int sum = 0;
    char ch[10];
    int count = 0;
    while (1)
    {

        scanf("%s", ch);

        if (strcmp(ch,"caw") == 0)
        {
            scanf("%s", ch); 
            printf("%d\n", sum);
            sum = 0;
            count++;
        }
        
        else if (strcmp(ch,"---")==0)
        {
            sum +=0;
        }
        else if (strcmp(ch,"--*")==0)
        {
            sum +=1;
        }
        else if (strcmp(ch,"-*-")==0)
        {
            sum +=2;
        }
        else if (strcmp(ch,"-**")==0)
        {
            sum +=3;
        }
        else if (strcmp(ch,"*--")==0)
        {
            sum +=4;
        }
        else if (strcmp(ch,"*-*")==0)
        {
            sum +=5;
        }
        else if (strcmp(ch,"**-")==0)
        {
            sum +=6;
        }
        else if (strcmp(ch,"***")==0)
        {
            sum +=7;
        }

        if (count==3)
        {
            break;
        }
        
        
        
        
    }

    return 0;
}